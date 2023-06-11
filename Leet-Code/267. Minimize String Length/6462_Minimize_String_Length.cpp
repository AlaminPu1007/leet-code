#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizedStringLength(string s)
    {
        unordered_map<char, int> Map;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            Map[s[i]]++;
        }

        return Map.size();
    }
};

int main(void)
{
    Solution obj;
    string s = "aaabc";
    cout << obj.minimizedStringLength(s) << endl;
    return 0;
}