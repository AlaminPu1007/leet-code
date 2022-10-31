#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                count++;
            
            if(count > 3)
                return false;
        }
        
        if(count == 3)
            return true;
        
        return false;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isThree(4);
    cout<<res<<endl;
    return 0;
}