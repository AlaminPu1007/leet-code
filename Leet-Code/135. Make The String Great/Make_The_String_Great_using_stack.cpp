#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        
        vector<char>stack;
        
        int len = s.length();
        
        for(int i = 0; i < len; i++)
        {
            if(!stack.empty() && abs(stack.back() - s[i]) == 32)
            {
                stack.pop_back();
            }
                
            else
            {
                stack.push_back(s[i]);
            }
             
        }
        //copy string begin to end from stack vector char array inside new string
        string ans(stack.begin(), stack.end());
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.makeGood("abBcC");
    cout<<"ans is : "<<ans<<endl;
    return 0;
}