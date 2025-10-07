#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        int n = arr.size(), j = 0;
        vector<int> res;
        list<int> lt;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                // store negative element into list
                lt.push_back(arr[i]);
            }

            // if we get k size window
            if ((i - j + 1) == k)
            {
                int negElement = lt.size() ? lt.front() : 0;

                res.push_back(negElement);

                if (arr[j] < 0 && lt.size())
                    lt.pop_front();

                // shift left pointer
                j++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-8, 2, 3, -6, 10};
    vector<int> res = obj.firstNegInt(arr, 2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}