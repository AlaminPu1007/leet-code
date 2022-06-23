
#include <iostream>
#include <climits> 
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int rev = 0,mod = 0, copy = n;
        while(n != 0)
        {
            mod = n % 10;
            
            //check positive overlapping/negative overlapping
            if ( (rev>INT_MAX/10 || (rev==INT_MAX/10 && (n % 10)>7)) || 
                 (rev<INT_MIN/10 || (rev==INT_MIN/10 && (n % 10) <-8)) ) 
            return 0;
            
            rev = rev * 10 + mod;
            n /= 10;
        }
        return rev;
    }
};

int main(void) {
    Solution obj;
    int n;
    cin>> n;
    
    obj.reverse(n);

    return 0;
}