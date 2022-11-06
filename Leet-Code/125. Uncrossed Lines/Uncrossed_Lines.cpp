#include <bits/stdc++.h>
using namespace std;

const int ARRAY_SIZE = 1001;

class Solution
{
public:
    int maxUncrossedLines(vector<int>& text1, vector<int>& text2) 
    {
        int m = text1.size(), n = text2.size();

        int MEMO[2][ARRAY_SIZE] = {};

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                 MEMO[!(i % 2)][j + 1] = text1[i] == text2[j] ? MEMO[i % 2][j] + 1 : max(MEMO[i % 2][j + 1], MEMO[!(i % 2)][j]);
            
        }
        return MEMO[m % 2][n];
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1,4,2}, nums2 = {1,2,4};
    int res = obj.maxUncrossedLines(nums1,nums2);
    cout<<res<<endl;
    return 0;
}