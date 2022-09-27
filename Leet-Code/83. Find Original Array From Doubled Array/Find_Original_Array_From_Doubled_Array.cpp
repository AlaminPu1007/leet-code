#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        vector<int> ans;
        map<int, int> Map;
        int len = changed.size();
        
        if (len % 2 == 1) return {};
        
        //sort array
        sort(changed.begin(), changed.end());
        
        for(int i = 0; i < len; i++)
            Map[changed[i]]++;
        
        for(int i = 0; i < len; i++)
        {
            if(Map[changed[i]] == 0) continue;
            
            if(Map[changed[i] * 2] == 0) return {};
            
            ans.push_back(changed[i]);
            
            Map[changed[i]]--;
            Map[changed[i] * 2]--;
        }
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = { 1,3,4,2,6,8 };
    vector<int> res = obj.findOriginalArray(arr);
    int len = res.size();
    
    for(int i = 0; i < len; i++)
    cout<<res[i]<<" ";
    
    return 0;
}