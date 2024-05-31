
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        int xorAB = 0;

        // after xor all element of nums,
        // the duplicate number are canceled only unique number xor result will remain
        for (auto item : nums)
            xorAB ^= item;

        // define a variable that have last bit set to 1
        int diff_bit = 1; // the binary representation is -> 000001

        // find out the number who has set bit 1
        while (!(diff_bit & xorAB))
            // shift every 1 bit until we get the matched bit
            diff_bit = diff_bit << 1;

        int a = 0, b = 0;

        // now we group the nums array with diff_bit
        // group by them if any number has the same 1 bit that does diff_bit belongs
        for (auto item : nums)
        {
            if (diff_bit & item)
                a ^= item;

            else
                b ^= item;
        }

        return {a, b};
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 1, 3, 2, 5};
    vector<int> res = obj.singleNumber(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}