#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        int len1 = nums.size(), len2 = queries.size();
        vector<int> ans;

        // sort nums
        sort(nums.begin(), nums.end());

        for (int i = 0; i < len2; i++)
        {
            int query = queries[i];
            int count = 0;
            for (int j = 0; j < len1; j++)
            {
                if (query >= nums[j])
                {
                    count++;
                    query -= nums[j];
                }
                else
                    break;
            }

            ans.push_back(count);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {4, 5, 2, 1}, queries = {3, 10, 21};
    vector<int> res = obj.answerQueries(nums, queries);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}