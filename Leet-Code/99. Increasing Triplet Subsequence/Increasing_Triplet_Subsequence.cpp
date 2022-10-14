#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int len = nums.size();
        
        if(len < 3) return false;
        
        int firstItem = INT_MAX;
        int secondItem = INT_MAX;
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] <= firstItem)
                firstItem = nums[i];
            
            else if(nums[i] <= secondItem)
                secondItem = nums[i];
            
            else return true;
        }
        
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2,1,5,0,4,6};
    bool res = obj.increasingTriplet(arr);
    cout<<res<<endl;
   
    return 0;
}