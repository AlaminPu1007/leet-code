#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        string result;
        int l = 0, mod = 0, i;
        
        if(n % 2 == 0)
        {
           for(i = 0; i < n - 1; i++)
            {
              result.push_back('a');
            }
         result.push_back('b');
        }
        else {
            for(i = 0; i < n; i++)
            {
              result.push_back('a');
            }
        }
        
        return result;
    }
};

int main(void)
{
    Solution obj;
    string result;
    int n = 15;
    
    result = obj.generateTheString( n);
    
    cout<<result;
    
    return 0;
}