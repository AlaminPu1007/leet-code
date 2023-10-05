#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        int len = s.size();
        string res = "";
        int freq[26] = {0};
        // int isInserted[26] = {0};
        stack<char> st;
        vector<bool> isInserted(26, false);

        for (int i = 0; i < len; i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < len; i++)
        {
            freq[s[i] - 'a']--;

            if (isInserted[s[i] - 'a'])
                continue;

            while (!st.empty() && st.top() > s[i] && freq[st.top() - 'a'] > 0)
            {
                isInserted[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            isInserted[s[i] - 'a'] = true;
        }

        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "cbacdcbc";
    cout << obj.removeDuplicateLetters(s) << endl;
    return 0;
}