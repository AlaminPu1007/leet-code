#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i, count = 0, n = nums.size() - 1;

        for (i = 0; i < n; i++)
        {
            if (nums[i] != nums[i + 1])
            {

                nums[++count] = nums[i + 1];
            }
        }

        return count + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = obj.removeDuplicates(arr);

    cout << res << endl;
    return 0;
}