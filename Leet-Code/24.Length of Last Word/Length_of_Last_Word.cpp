/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Length of Last Word.
Memory Usage: 6.6 MB, less than 52.03% of C++ online submissions for Length of Last Word.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0, len = s.length();
        
        for(int i = (len - 1); i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                count++;
            }
            else if(count > 0)
            {
                break;
            }
        }
        
        return count;
        
    }
};

int main(void)
{
    Solution obj;
    string s = "   fly me   to   the moon  ";
    
    obj.lengthOfLastWord(s);
    return 0;
}