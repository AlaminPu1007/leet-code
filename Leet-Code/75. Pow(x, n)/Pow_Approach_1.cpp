#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        double myPow(double x, int n) {
            
            if(n== 0) return 1;
            else return (x * pow(x, (double(n) - 1) ));
        }
};

int main(void)
{
    Solution obj;
    double ans = obj.myPow(2.00000, 10);
    
    cout<<ans<<"ans"<<endl;
    return 0;
}