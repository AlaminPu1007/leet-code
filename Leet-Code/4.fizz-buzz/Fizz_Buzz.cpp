#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        map<int, string>Map;
        vector<string>arr;
        int i;
        
        for(i = 1; i <= n; i++)
        {
            if((i % 3 == 0) && (i % 5 == 0))
            {
                arr.push_back("FizzBuzz");
            }
            else if(i % 3 == 0){
                arr.push_back("Fizz");
            }
            else if(i % 5 == 0)
            {
                arr.push_back("Buzz");
            }else {
                arr.push_back(to_string(i));
            }
        }
        
        return arr;
        
    }
};