#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int len = numbers.size();
        int left = 0, right = len - 1;

        while (left <= right)
        {
            if (numbers[left] + numbers[right] == target)
            {
                return {left + 1, right + 1};
            }

            else if (numbers[left] + numbers[right] > target)
            {
                right--;
            }
            else
                left++;
        }
        return {-1};
    }
};

int main(void)
{
    Solution obj;
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    vector<int> res = obj.twoSum(numbers, target);
    for (auto it : res)
        cout << it << " ";
    return 0;
}