#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int frq[26] = {0}, left = 0;
        int res = 0, len = s.size();

        unordered_set<char> st;

        for (int i = 0; i < len; i++)
        {

            while (st.count(s[i]))
            {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[i]);
            res = max(res, i - left + 1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "pwwkew";
    cout << obj.lengthOfLongestSubstring(s) << endl;
    return 0;
}