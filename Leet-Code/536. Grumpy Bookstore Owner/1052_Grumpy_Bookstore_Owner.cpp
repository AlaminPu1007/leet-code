#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int max_window = 0, n = customers.size();
        int left = 0, satisfiedSum = 0, window = 0;

        for (int right = 0; right < n; right++)
        {
            if (grumpy[right])
                window += customers[right];

            else
                satisfiedSum += customers[right];

            // get max window
            if (right - left + 1 > minutes)
            {
                if (grumpy[left])
                    window -= customers[left];

                left++;
            }
            max_window = max(window, max_window);
        }

        return satisfiedSum + max_window;
    }
};

int main(void)
{
    Solution obj;
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5}, grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes = 3;
    cout << obj.maxSatisfied(customers, grumpy, minutes) << endl;
    return 0;
}