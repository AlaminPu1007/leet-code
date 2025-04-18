/**
 * A recursive approach is implemented.
 * This solution will give us "Time Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int superEggDrop(int k, int n)
    {
        return DFS(k, n); // Start the recursive depth-first search
    }

private:
    int DFS(int e, int f)
    {
        // Base case: If there are no eggs or no floors, no trials are needed.
        if (e == 0 || f == 0)
            return 0;

        // If there is only one egg, the worst-case scenario is dropping from
        // every floor starting from the bottom, which takes `f` attempts.
        if (e == 1)
            return f; // Example: If we have 1 egg and 10 floors, we need 10 attempts.

        // If there is only one floor, only one attempt is needed.
        if (f == 1)
            return 1; // Example: If we have 3 eggs and 1 floor, only 1 attempt is required.

        int res = INT_MAX; // Initialize result with a large value.

        // Try dropping an egg from each floor `k` (1 to f)
        for (int k = 1; k <= f; k++)
        {
            int temp = 1 + max(
                               // Case 1: Egg breaks → Check floors below `k`
                               DFS(e - 1, k - 1),

                               // Case 2: Egg does not break → Check floors above `k`
                               DFS(e, f - k));

            // Store the minimum number of attempts required
            res = min(res, temp);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int k = 2, n = 6;

    cout << obj.superEggDrop(k, n) << endl;

    return 0;
}