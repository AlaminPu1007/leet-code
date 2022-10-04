#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        
        for(int i = 0; i < len; i++)
        {
            while(nums[i] > 0 && nums[i] <= len && nums[i] != nums[nums[i]-1])
            swap(nums[i], nums[nums[i]-1]);
        }
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] != i+1)
            return i+1;
        }
        
        return len + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3,4,-1,1};
    int res = obj.firstMissingPositive(arr);
    
    cout<<res<<endl;
    return 0;
}