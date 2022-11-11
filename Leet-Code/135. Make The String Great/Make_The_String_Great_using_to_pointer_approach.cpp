#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        
        int len = s.length(), end = 0;
        
        for(int i = 0; i < len; i++)
        {
            
            if(end && abs(s[end - 1] - s[i]) == 32)
            {
                end--;
            }
            //make an end pointer
            else{
                s[end++] = s[i];
            }
        }
        return s.substr(0, end);
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.makeGood("abBAcC");
    cout<<"ans is : "<<ans<<endl;
    return 0;
}