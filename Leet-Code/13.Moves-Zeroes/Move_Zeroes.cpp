#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int len = nums.size();
        int i, count = 0, j = 0;
        if (len == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (i = 0; i < len; i++)
            {
                if (nums[i] != 0)
                {
                    nums[j++] = nums[i];
                }
                else
                {
                    count++;
                }
            }
            while (count > 0)
            {
                nums[j++] = 0;
                count--;
            }
            for (i = 0; i < len; i++)
            {
                cout << nums[i] << " ";
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 0, 3, 12};
    obj.moveZeroes(arr);
}