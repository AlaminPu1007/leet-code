#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int len = nums.size();
        sort(nums.begin(), nums.end(),greater<int>());
        
        return nums[k - 1];
        
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3,2,1,5,6,4};
    
    obj.findKthLargest(arr,2);
    
    return 0;
}