#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        if (s.size() < k)
            return false;

        int oddCount = 0;

        unordered_map<char, int> Count;

        for (auto ch : s)
            Count[ch]++;

        for (auto item : Count)
        {
            if (item.second % 2 != 0)
                oddCount++;
        }

        return oddCount <= k;
    }
};

int main(void)
{
    Solution obj;
    string s = "annabelle";
    cout << obj.canConstruct(s, 2) << endl;
    return 0;
}