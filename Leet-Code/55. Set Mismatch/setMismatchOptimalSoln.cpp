// https://github.com/AlaminPu1007/leet-code/tree/master/Leet-Code/55.%20Set%20Mismatch
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        
        int dup     = -1;
        int missing = -1;
        
        for(int i = 0; i<n; i++) {
            int num = abs(nums[i]);
            
            if(nums[num-1] < 0)
                dup = num;
            else
                nums[num-1] *= (-1);
        }
        
        for(int i = 0; i<n; i++) {
            if(nums[i] > 0) {
                missing = i+1;
                break;
            }
        }
        
        return {dup, missing};
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {1,2,2,4};
    vector<int> res = obj.findErrorNums(nums);
    
    for(int i = 0; i < res.size(); i++)
        cout<<res[i]<<" ";
    return 0;
}