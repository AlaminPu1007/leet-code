// This problem got Memory Limit Exceeded

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSumAfterPartitioning(vector<int> &arr, int k)
    {
        int n = arr.size();
        int cache[arr.size()];

        memset(cache, -1, sizeof(cache));
        return DFS(arr, 0, n, k, cache);
    }

private:
    int DFS(vector<int> &arr, int start, int n, int k, int cache[])
    {
        if (start >= n)
            return 0;

        if (cache[start] != -1)
            return cache[start];

        int ans = 0;
        int cur_max = 0;

        int end = min(n, start + k);

        for (int j = start; j < end; j++)
        {
            cur_max = max(cur_max, arr[j]);

            int windowSum = cur_max * (j - start + 1);

            ans = max(ans, windowSum + DFS(arr, j + 1, n, k, cache));
        }
        return cache[start] = ans;
    }
};

int main(void)
{
    Solution obj;
    int k = 3;
    vector<int> arr = {1, 15, 7, 9, 2, 5, 10};
    cout << obj.maxSumAfterPartitioning(arr, k) << endl;
    return 0;
}