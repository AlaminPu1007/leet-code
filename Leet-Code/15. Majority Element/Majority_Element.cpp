

#include <iostream>
#include <map>
#include <vector>

using namespace std;

/*
 This approach using Hash map, with T.C -> O(n) and S.C -> O (N)
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> Map;
        int len = nums.size(), i;
        // count each element by map
        for (i = 0; i < len; i++)
            Map[nums[i]]++;

        for (auto item : Map)
            if (item.second > (len / 2))
            {
                return item.first;
                // break;
            }

        return 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int res = obj.majorityElement(arr);

    cout << res << endl;
    return 0;
}

/*
 This approach for space complexity, with T.C -> O(n) and S.C -> O (1)
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int len = nums.size(), i, count = 0, copyNum = 0;

        for (i = 0; i < len; i++)
        {
            if (count == 0)
                copyNum = nums[i];

            count += (nums[i] == copyNum) ? 1 : -1;
        }

        return copyNum;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int res = obj.majorityElement(arr);

    cout << res << endl;
    return 0;
}