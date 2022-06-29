#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    
    int count = 0;
    
     for(int i = digits.size() - 1; i >=0; i--)
    {
        if(digits[i] < 9)
        {
            digits[i]++;
            count++;
            break;
        }
        else {
            digits[i] = 0;
        }
    }
    
    //insert at begin
    if(!count)
    digits.insert(digits.begin(), 1);
    
    return digits;
        
    }
};

int main() {
    
    Solution obj;
    
    vector<int>arr = {9,9,9,9};
    
    vector<int>result = obj.plusOne(arr);
    
    
    for(int i = 0; i < result.size(); i++)
    cout<<result[i]<<" ";
    
    return 0;
}

