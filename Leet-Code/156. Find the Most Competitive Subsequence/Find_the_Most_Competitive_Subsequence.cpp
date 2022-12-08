#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> mostCompetitive(vector<int> &nums, int k)
    {

        // it's an constant time complexity
        // https://en.cppreference.com/w/cpp/container/vector/size
        int len = nums.size();

        vector<int> res;

        for (int i = 0; i < len; i++)
        {
            // res.size()+len-i elements are left in the array after ith index
            //  it's either pop or not
            while (!res.empty() && res.back() > nums[i] && (res.size() + len - i) > k)
                res.pop_back();

            if (res.size() < k)
                res.push_back(nums[i]);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 5, 2, 6};
    vector<int> res = obj.mostCompetitive(arr, 3);
    int len = res.size();

    for (int i = 0; i < len; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}