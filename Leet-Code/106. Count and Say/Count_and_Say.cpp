
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        int count = 1;
        string ans = "";
        
        if(n == 1) return "1";
        if(n == 2) return "11";
        
        string x = countAndSay(n-1);
        
        for(int i = 0; i < x.size(); i++)
        {
            if(x[i] == x[i + 1]){
                count++;
              }  
            else {
                ans += to_string(count);
                ans += x[i];
                count = 1;
            }
        }
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string res = obj.countAndSay(4);
    cout<<res<<endl;
    return 0;
}