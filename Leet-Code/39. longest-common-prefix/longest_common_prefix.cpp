
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        int len = strs.size(), i = 0, j = 0;
        
        string ans = "";
        
        while(i < strs[0].size() && j < strs[len - 1].size())
        {
            if(strs[0][i] == strs[len-1][j])
            {
                ans += strs[0][i];
                i++;
                j++;
            }
            else break;
        }
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"flower","flow","flight"};
    obj.longestCommonPrefix(str);
    return 0;
}