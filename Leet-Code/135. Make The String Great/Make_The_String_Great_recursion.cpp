#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        
        if(s == "")
            return s;
        
        cout<<s<<endl;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(abs(s[i] - s[i + 1]) == 32)
            {
                
                return makeGood(s.substr(0, i) + s.substr(i + 2));
            }
        }
        return s;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.makeGood("abBcC");
    cout<<"ans is : "<<ans<<endl;
    return 0;
}