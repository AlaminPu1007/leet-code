
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    double Solve(double x, int n)
    {
        if(n == 0) return 1;
        
        if(n % 2 == 0)
        {
            double ans = Solve(x, n/2);
            return ans * ans;
        }
        else {
            double ans = Solve(x, n/2);
            return ans * ans *  x;
        }
    }
    public:
        double myPow(double x, int n) {
            
            if(n > 0) return Solve(x, n);
            else return 1 / Solve(x, n);
        }
};

int main(void)
{
    Solution obj;
    double ans = obj.myPow(2.00000, 10);
    
    cout<<ans<<"ans"<<endl;
    return 0;
}