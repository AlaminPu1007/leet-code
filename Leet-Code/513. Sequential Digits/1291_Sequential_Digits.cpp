#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> ans;

        queue<int> q;

        for (int i = 1; i <= 9; i++)
            q.push(i);

        while (!q.empty())
        {
            int n = q.front();
            q.pop();

            if (n > high)
                continue;

            // check only valid answer
            if (n >= low && n <= high)
            {
                ans.push_back(n);
            }

            int ones = n % 10;

            // avoid the value who can make (10)
            if (ones < 9)
            {
                // make new element and put them in last to getting shorted answer
                q.push((n * 10) + (ones + 1));
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    int low = 1000, high = 13000;

    vector<int> res = obj.sequentialDigits(low, high);

    for (auto item : res)
        cout << item << " ";

    return 0;
}