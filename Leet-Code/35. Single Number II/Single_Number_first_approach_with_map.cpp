
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int len = nums.size();
        map<int,int>Map;
        
        for(int i = 0; i < len; i++)
        Map[nums[i]]++;
        
        for(auto item: Map)
        {
            if(item.second == 1)
                return item.first;
            
        }
        return nums[0];
    }
};

int main(void)
{
    Solution obj;
    vector<int>arr = {0,1,0,1,0,1,99};
    obj.singleNumber(arr);
    return 0;
}