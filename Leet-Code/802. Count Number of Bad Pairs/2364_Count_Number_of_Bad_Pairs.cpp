#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        long long res = 0;
        int n = nums.size();

        // initialized a map to check how many numbers are equal that have already seen
        unordered_map<int, int> Map;

        // preprocessing the array
        /**
         * Simplified the given equation:
         *
         *  j - i != nums[j] - nums[i]
         *
         *  => nums[i] - i != nums[j] - j
         *
         * subtract each nums[i] from it's index
         * Then we will check only the pairs of numbers where they are not equals
         */
        for (int i = 0; i < n; i++)
            nums[i] = (nums[i] - i);

        for (int i = 0; i < n; i++)
        {
            int item = nums[i];

            res += (i - Map[item]);

            Map[item]++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << obj.countBadPairs(arr) << endl;

    return 0;
}