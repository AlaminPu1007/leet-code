/**
 * This solution also give us "Time Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int superEggDrop(int k, int n)
    {
        // Create a DP table initialized with -1 (indicating uncomputed states)
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1));

        // Call the recursive function with memoization
        return DFS(k, n, dp);
    }

private:
    int DFS(int e, int f, vector<vector<int>> &dp)
    {
        // Base Case: No floors → 0 attempts needed
        if (f == 0)
            return 0;

        // Base Case: Only one egg → Linear search required (drop from each floor)
        if (e == 1)
            return f; // Example: 1 egg, 10 floors → Requires 10 attempts in the worst case.

        // Base Case: Only one floor → Only 1 attempt needed
        if (f == 1)
            return 1; // Example: Any number of eggs with 1 floor → Only 1 attempt.

        // If result is already computed, return cached value
        if (dp[e][f] != -1)
            return dp[e][f];

        int res = INT_MAX; // Initialize result with a large value.

        // Try dropping an egg from each floor `k` (1 to f)
        for (int k = 1; k <= f; k++)
        {
            int temp = 1 + max(
                               // Case 1: Egg breaks → We check floors below `k`
                               DFS(e - 1, k - 1, dp),

                               // Case 2: Egg does not break → We check floors above `k`
                               DFS(e, f - k, dp));

            // Store the minimum number of attempts required
            res = min(res, temp);
        }

        // Memoize and return the result
        return dp[e][f] = res;
    }
};

int main(void)
{
    Solution obj;
    int k = 2, n = 6;

    cout << obj.superEggDrop(k, n) << endl;

    return 0;
}