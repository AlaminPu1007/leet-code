#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> getLongestSubsequence(vector<string> &words, vector<int> &groups)
    {
        int n = groups.size();
        vector<string> res;

        for (int i = 0; i < n; i++)
            if (i == 0 || groups[i] != groups[i - 1])
                res.push_back(words[i]);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"e", "a", "b"};
    vector<int> arr = {0, 0, 1};

    vector<string> ans = obj.getLongestSubsequence(words, arr);

    for (auto item : ans)
        cout << item << " ";

    return 0;
}