#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int n = words.size();
        vector<int> prefixSum(n + 1, 0);

        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < n; i++)
        {
            int v = 0;
            char firstChar = words[i][0];
            char lastChar = words[i][words[i].size() - 1];

            if (st.find(firstChar) != st.end() && st.find(lastChar) != st.end())
                v = 1;

            prefixSum[i + 1] = prefixSum[i] + v;
        }

        vector<int> res;

        for (auto item : queries)
        {
            int l = item[0];
            int r = item[1];

            int value = prefixSum[r + 1] - prefixSum[l];
            res.push_back(value);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<string> words = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> queries = {{0, 2}, {1, 4}, {1, 1}};

    vector<int> res = obj.vowelStrings(words, queries);

    for (auto item : res)
        cout << item << " ";

    return 0;
}