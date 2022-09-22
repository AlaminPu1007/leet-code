#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int len = s.length(), lastIndex = -1;
        string ans;
        
        for(int i = 0; i < len; i++)
        {
            if((s[i] == ' ') || (i == len - 1))
            {
                int startIndex = (i == len - 1) ? i : i - 1;
                
                for(; startIndex > lastIndex; startIndex--)
                    ans += s[startIndex];
                
                if(i != len - 1) ans += ' ';
                
                lastIndex = i;
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.reverseWords("Let's take LeetCode contest");
    cout<<ans<<endl;
    return 0;
}