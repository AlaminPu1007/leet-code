#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int len = nums.size();
        int count1 = 0, count2 = 0;
        int firstNumber = 0, secondNumber = 0;
        vector<int> res;

        for (auto item : nums)
        {
            if (item == firstNumber)
            {
                count1++;
            }
            else if (item == secondNumber)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                firstNumber = item;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                secondNumber = item;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        count1 = 0, count2 = 0;

        for (auto item : nums)
        {
            if (firstNumber == item)
                count1++;
            else if (secondNumber == item)
                count2++;
        }

        if (count1 > (len / 3))
            res.push_back(firstNumber);
        if (count2 > (len / 3))
            res.push_back(secondNumber);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2};
    vector<int> res = obj.majorityElement(arr);

    for (auto item : res)
        cout << item << " ";
    return 0;
}