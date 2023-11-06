#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> ans;
        int len = target.size();

        for (int i = 1, j = 0; i <= n && j < len; i++)
        {
            ans.push_back("Push");

            if (i == target[j])
                j++;

            else
                ans.push_back("Pop");
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> t = {1, 2, 3};
    vector<string> res = obj.buildArray(t, 3);
    for (auto item : res)
        cout << item << " ";
    return 0;
}