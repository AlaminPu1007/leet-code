#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        vector<string> ans;
        for (auto i : words)
        {
            for (auto j : words)
            {
                if (i != j)
                {
                    if (j.find(i) != -1)
                    {
                        ans.push_back(i);
                        // to avoid an duplicate value, we need to break it
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"leetcode","et","code"};
    vector<string> res = obj.stringMatching(str);
    for (auto item : res)
        cout << item << " ";
    return 0;
}