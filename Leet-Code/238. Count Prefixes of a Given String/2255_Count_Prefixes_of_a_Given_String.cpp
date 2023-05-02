#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrefixes(vector<string> &words, string s)
    {
        int len = s.size(), ans = 0;
        map<string, int> Map;

        for (auto item : words)
            Map[item]++;

        for (int i = 0; i <= len; i++)
        {
            string copy_str = s.substr(0, i);

            auto findItem = Map.find(copy_str);
            if (findItem != Map.end())
                ans += findItem->second;
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"a", "b", "c", "ab", "bc", "abc"};
    string s = "abc";
    int res = obj.countPrefixes(words, s);
    cout << res << endl;
    return 0;
}