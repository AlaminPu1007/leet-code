#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int n = 0, reverse = 0, remainder = 0;
        n = x;
        
        while (n > reverse )
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        
        // if odd number of value is present --> (reverse/10 == n)
        
       return (n == reverse) || (reverse/10 == n);
       
    }
};

int main(void)

{
    
	Solution obj;
    
	int number = 12321;
    
    
	int result = obj.isPalindrome(number);
    
	cout<<result;
    
    
	return 0;

}