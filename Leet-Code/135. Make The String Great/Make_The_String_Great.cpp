#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        
        // if s has less than 2 characters, we just return itself.
        while (s.size() > 1) {
            // 'find' records if we find any pair to remove.
            bool find = false;
            
            // Check every two adjacent characters, currChar and nextChar.
            for (int i = 0; i < s.size() - 1; ++i) {
                char currChar = s[i], nextChar = s[i + 1];
                
                // If they make a pair, remove them from 's' and let 'find = true'.
                if (abs(currChar - nextChar) == 32) {
                    s = s.substr(0, i) + s.substr(i + 2);
                    find = true;
                    break;
                }
            }
            
            // If we cannot find any pair to remove, break the loop. 
            if (!find)
                break;
        }
        
        return s;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.makeGood("abBAcC");
    cout<<ans<<endl;
    return 0;
}