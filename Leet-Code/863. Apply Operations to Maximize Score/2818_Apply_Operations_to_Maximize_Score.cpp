#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int maximumScore(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = 1;
        vector<int> primeFactors;

        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            int score = 1;

            for (int j = 2; j <= sqrt(num); j++)
            {
                if (num % j == 0)
                {
                    score++;
                    while (num % j == 0)
                        num /= j;
                }
            }

            if (num > 1)
                score++;

            primeFactors.push_back(score);
        }

        vector<int> left_bound(n, -1), right_bound(n, n);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && primeFactors[st.top()] < primeFactors[i])
            {
                int idx = st.top();
                st.pop();
                right_bound[idx] = i;
            }

            if (!st.empty())
                left_bound[i] = st.top();

            st.push(i);
        }

        // initialize a max-heap
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < n; i++)
            pq.push({nums[i], i});

        while (k > 0)
        {
            int num = pq.top().first, index = pq.top().second;
            pq.pop();

            // Compute the number of operations available from this index.
            long long left_count = index - left_bound[index];
            long long right_count = right_bound[index] - index;

            // Use long long to avoid overflow from multiplication.
            long long count = (long long)left_count * (long long)right_count;
            int operations = min((long long)k, (long long)count);

            res = (int)((long long)res * power(num, operations) % MOD);

            k -= operations;
        }

        return res;
    }

private:
    long long power(long long base, long long exponent)
    {
        long long res = 1;
        while (exponent > 0)
        {
            if (exponent % 2 == 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exponent /= 2;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {8, 3, 9, 3, 8};

    cout << obj.maximumScore(arr, 2) << endl;

    return 0;
}
