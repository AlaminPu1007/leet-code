class Solution
{
public:
    // Function to calculate the minimum number of attempts required to find the critical floor.
    int superEggDrop(int k, int n)
    {
        // Initialize a dp table where dp[i][j] represents the minimum attempts needed
        // to find the critical floor with i eggs and j floors.
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

        // Base case: If we have only 1 egg, the minimum attempts required for j floors is j.
        // We need to drop the egg from every floor starting from the first, 1 by 1.
        for (int i = 1; i <= n; i++)
            dp[1][i] = i;

        // Base case: If we have 1 floor, only 1 attempt is required for any number of eggs.
        for (int j = 1; j <= k; j++)
            dp[j][1] = 1;

        // Now we begin the dynamic programming process for the remaining cases.
        // Starting with 2 eggs (i = 2) up to k eggs, and starting from 2 floors (j = 2) up to n floors.
        for (int i = 2; i <= k; i++)
        {
            // Loop through each floor from 2 to n (j floors).
            for (int j = 2; j <= n; j++)
            {
                // Initialize minVal to a large number. We are trying to find the minimum value.
                int minVal = INT_MAX;

                // Try dropping an egg from each floor x (from j-1 to 0).
                // x is the floor we are trying, and we compare it with the result of dropping the egg
                // and the worst case scenarios.
                for (int x = j - 1, y = 0; x >= 0; x--, y++)
                {
                    // v1: the result if the egg does not break (we have the same number of eggs, but we now check below floor x)
                    int v1 = dp[i][x];

                    // v2: the result if the egg does break (we have one less egg, and we now check floors below y)
                    int v2 = dp[i - 1][y];

                    // The value here represents the worst-case number of attempts between these two scenarios.
                    int val = max(v1, v2);

                    // Update minVal with the minimum between current minVal and val.
                    minVal = min(val, minVal);
                }

                // Store the result in dp[i][j]. Add 1 because we are considering the current attempt.
                dp[i][j] = minVal + 1;
            }
        }

        // Return the minimum number of attempts needed for k eggs and n floors.
        return dp[k][n];
    }
};

int main(void)
{
    Solution obj;
    int k = 2, n = 6;

    cout << obj.superEggDrop(k, n) << endl;

    return 0;
}