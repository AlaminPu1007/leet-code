#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size();
        int res = 0, l = 0;
        unordered_map<char, int> Map;

        for (int i = 0; i < n; i++)
        {
            // put current character into hash-amp
            Map[s[i]]++;

            while (Map.size() == 3)
            {
                res += n - i;

                // now try to shift left pointer
                Map[s[l]]--;
                if (Map[s[l]] == 0)
                    Map.erase(s[l]);
                l++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.numberOfSubstrings("abcabc") << endl;

    return 0;
}