#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int superEggDrop(int k, int n)
    {
        // Create a DP table initialized with -1 (indicating uncomputed states)
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1));

        // Call the recursive function with memoization to find the minimum number of attempts
        return DFS(k, n, dp);
    }

private:
    // DFS helper function with memoization for calculating the minimum attempts needed
    int DFS(int e, int f, vector<vector<int>> &dp)
    {
        // Base Case: No floors left → 0 attempts needed
        if (f == 0)
            return 0;

        // Base Case: Only one egg left → Linear search (drop from each floor)
        if (e == 1)
            return f; // Example: With 1 egg, 10 floors → Worst case requires 10 attempts.

        // Base Case: Only one floor left → Only 1 attempt needed
        if (f == 1)
            return 1; // Example: With any number of eggs, 1 floor → Only 1 attempt needed.

        // If result is already computed, return the cached value
        if (dp[e][f] != -1)
            return dp[e][f];

        int res = INT_MAX; // Initialize result with a large value to minimize it later.

        int low = 1, high = f;

        // Binary Search loop to find the best floor to drop the egg from
        while (low <= high)
        {
            int mid = (high + low) / 2;

            // Compute the worst-case number of attempts needed for the two outcomes:
            // - Left side (egg breaks): One less egg and floors before mid.
            // - Right side (egg does not break): Same number of eggs and floors above mid.
            int left = DFS(e - 1, mid - 1, dp);
            int right = DFS(e, f - mid, dp);

            // Choose the maximum of both sides, then add 1 for the current attempt
            int temp = 1 + max(left, right);

            // Adjust search space to continue the binary search based on which side is more optimal
            if (left < right)
                low = mid + 1;
            else
                high = mid - 1;

            // Update the result with the minimum attempts found
            res = min(res, temp);
        }

        // Memoize the result for the current state (e eggs, f floors)
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