#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findAllPermutation(int ind, vector<int> &arr, vector<int> &ds, map<int,int> &Map, vector<vector<int>> &ans, int len)
    {
        if(len == ds.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i = 0; i < len; i++)
        {
            if(!Map[i])
            {
                ds.push_back(arr[i]);
                Map[i] = 1;
                findAllPermutation(ind+1, arr,ds,Map,ans,len);
                Map[i] = 0;
                ds.pop_back();
            }
        }
    };
    
    vector<vector<int>> permute(vector<int>& nums) {
        int len = nums.size();
        map<int,int>Map;
        vector<int> ds;
        vector<vector<int>>ans;
        //find all permutation
        findAllPermutation(0, nums, ds, Map, ans, len);
        return ans;
    };
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1,2,3};
    vector<vector<int>>ans = obj.permute(arr);
    
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        cout<<ans[i][j]<<" ";
        
        cout<<endl;
    }
    
    return 0;
}