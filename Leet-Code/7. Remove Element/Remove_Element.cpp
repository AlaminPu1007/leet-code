#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0, n = nums.size();
        while (i < n)
        {
            if (nums[i] == val)
            {
                // if any matching value is found, put last element inside of this position
                nums[i] = nums[n - 1];
                // also decrease the array size
                n--;
            }
            // else value != nums[i], remail array element are same
            // and increment i value
            else
            {
                i++;
            }
        }

        return n;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 2, 2, 3, 0, 4, 2};
    int value = 2;

    int res = obj.removeElement(arr, value);
    cout << res;

    return 0;
}