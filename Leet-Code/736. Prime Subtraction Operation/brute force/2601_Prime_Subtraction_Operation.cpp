#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool primeSubOperation(vector<int> &nums)
    {
        int n = nums.size();

        int prv = 0;

        for (int i = 0; i < n; i++)
        {
            int upper_bound = nums[i] - prv;

            // get largest prime from this number
            int largest_prime_number = 0;

            for (int j = upper_bound - 1; j >= 2; j--)
            {
                if (isPrime(j))
                {
                    largest_prime_number = j;
                    break;
                }
            }

            int target_num = nums[i] - largest_prime_number;

            if (target_num <= prv)
            {
                return false;
            }

            prv = target_num;
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