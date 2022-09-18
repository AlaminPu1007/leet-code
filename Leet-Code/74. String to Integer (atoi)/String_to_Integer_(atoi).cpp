//https://leetcode.com/problems/string-to-integer-atoi/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int len = s.size(), i = 0;
        long long ans = 0;
        // remove white space from string
        while(s[i] == ' ' && i < len)
            i++;
        
        // get positive|negative sign
        int flag = 1; // 1 = mean positive
        //for positive
        if(s[i] == '+') flag = 1, i++;
        //for negative
        else if(s[i] == '-') flag = -1, i++;
        
        //Handling leading zero
        while(s[i] == '0' && i < len) i++;
        
        //now covert string to integer
        while(s[i] >= '0' && s[i] <= '9' && i < len)
        {
            ans = ans * 10 + (s[i] - '0');
            
            if(ans > INT_MAX)
                break;
            i++;
        }
        
        ans *= flag;
        //return ans exactly to integer rang
        if(ans > INT_MAX) return INT_MAX;
        else if(ans < INT_MIN) return INT_MIN;
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.myAtoi("   -42");
    cout<<res<<endl;
    return 0;
}