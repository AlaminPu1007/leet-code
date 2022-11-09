#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k == 1)
        {
            string ans = s;
            for(int i = 0; s[i] != '\0'; i++)
                ans = min(ans, s.substr(i)+ s.substr(0,i));
                
            return ans;
        }
        else {
            sort(s.begin(), s.end());
            return s;
        }
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.orderlyQueue("cba", 1);
    cout<<ans<<endl;
    return 0;
}