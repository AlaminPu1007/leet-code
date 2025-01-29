#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool primeSubOperation(vector<int> &nums)
    {
        int n = nums.size();
        int maxNumber = *max_element(nums.begin(), nums.end());

        vector<int> primes(maxNumber + 1, 0);

        // exclusive maxNumber it self, cause we will check till maxNumber - 1
        // ex: [0, 0, 2, 3, 3, 5, 5, 7, 7]
        for (int i = 2; i <= maxNumber; i++)
        {
            if (isPrime(i))
                primes[i] = i;
            else
                primes[i] = primes[i - 1];
        }

        int prv = nums[0];

        // Loop over each element in nums
        for (int i = 0; i < n; i++)
        {
            int upper_bound = (i == 0 ? nums[0] : nums[i] - prv); // non-inclusive upper bound for primes

            // Check if upper_bound is <= 1, which would make `upper_bound - 1` invalid
            if (upper_bound <= 0)
                return false;

            // Get the largest prime number less than upper_bound
            int largest_p = primes[upper_bound - 1];

            // Subtract this value from nums[i].
            prv = nums[i] - largest_p;
        }

        return true;
    }

private:
    bool isPrime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 9, 6, 10};
    cout << obj.primeSubOperation(arr) << endl;
    return 0;
}