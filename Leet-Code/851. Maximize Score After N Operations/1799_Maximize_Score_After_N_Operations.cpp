#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> visited(n + 1, false);
        unordered_map<vector<bool>, int> Cache;
        return Solved(nums, n, 1, visited, Cache);
    }

private:
    int Solved(vector<int> &nums, int n, int level, vector<bool> &visited, unordered_map<vector<bool>, int> &cache)
    {
        if (cache.find(visited) != cache.end())
            return cache[visited];

        int ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (visited[i])
                continue;

            for (int j = i + 1; j < n; j++)
            {
                if (visited[j])
                    continue;

                visited[i] = true;
                visited[j] = true;

                int value = level * __gcd(nums[i], nums[j]);
                int remain_score = Solved(nums, n, level + 1, visited, cache);

                ans = max(ans, value + remain_score);

                visited[i] = false;
                visited[j] = false;
            }
        }

        return cache[visited] = ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 4, 6, 8};
    cout << obj.maxScore(arr) << endl;

    return 0;
}