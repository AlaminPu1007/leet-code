#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), count = 2;
        
        if(len < 3)
            return len;
        
        for(int i = 2; i < len; i++)
        {
            if(nums[count - 2] != nums[i])
            {
                nums[count] = nums[i];
                count++;
            }
            
        };
        
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0,0,1,1,1,1,2,3,3};
    obj.removeDuplicates(arr);
    return 0;
}