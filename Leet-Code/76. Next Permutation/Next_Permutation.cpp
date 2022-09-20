//https://leetcode.com/problems/next-permutation/
// T.C-O(n), S.C-O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size(), target1 = -1, target2 = -1;
        
        if(len <= 1) return;
        
        for(int i = len - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                target1 = i;
                break;
            }
        }
        
        if(target1 >= 0)
        {
            for(int i = len - 1; i >= 0; i--)
             {
                 if(nums[i] > nums[target1])
                 {
                     target2 = i;
                     break;
                 }
             }
             
             swap(nums[target1], nums[target2]);
        }
        
        reverse(nums.begin()+target1+1, nums.end());
         
        return;
        
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1,2,3};
    obj.nextPermutation(arr);
    return 0;
}