#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int len = height.size();
        int i = 0, j = len - 1;
        while(i < j)
        {
            int width = j - i;
            maxarea = max(maxarea, abs(min(height[i], height[j]) * width));
            if(height[i] <= height[j])
                i++;
            else j--;
        }
        return maxarea;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int ans = obj.maxArea(arr);
    cout<<ans;
    return 0;
}