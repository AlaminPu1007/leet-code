#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.size();
        if(len == 0 || len == 1)
            return "";
        
        for(int i = 0; i < len/2; i++)
        {
            if(palindrome[i] != 'a')
            {
                palindrome[i] = 'a';
                return palindrome;
            }    
        }
         // change the last  character with b
         palindrome[len-1] = 'b';
         
         return palindrome;
    }
};

int main(void)
{
    Solution obj;
    string arr = "aba";
    string res = obj.breakPalindrome(arr);
    cout<<res<<endl;
   
    return 0;
}