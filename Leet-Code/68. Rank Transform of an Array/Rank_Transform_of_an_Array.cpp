#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int len = arr.size(), j = 1;
        map<int,int>Map;
        vector<int> ans, copy = arr;
        
        //sort array
        sort(copy.begin(), copy.end());
        
        for(int i = 0; i < len; i++)
            if(!Map[copy[i]]) 
            Map[copy[i]] = j++;
        
        for(int i = 0; i < len; i++)
            ans.push_back(Map[arr[i]]);
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {40,10,20,30};
    vector<int> res = obj.arrayRankTransform(arr);
    
    for(auto item: res)
    cout<<item<<" ";
    
    return 0;
}