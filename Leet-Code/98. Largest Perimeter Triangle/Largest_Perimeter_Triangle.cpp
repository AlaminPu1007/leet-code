#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int len = nums.size();
        // sort array
        sort(nums.begin(), nums.end());
        for(int i = len - 3; i >= 0; i--)
        {
            if(nums[i] + nums[i + 1] > nums[i + 2])
                return nums[i] + nums[i + 1] + nums[i + 2];
        }
        return 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2,2,1};
    int res = obj.largestPerimeter(arr);
    cout<<res<<endl;
   
    return 0;
}