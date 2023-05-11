#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> V;
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {

        return {getElement(nums1, nums2), getElement(nums2, nums1)};
    }

private:
    vector<int> getElement(vector<int> nums1, vector<int> nums2)
    {
        unordered_set<int> insertForNums1, insertForNums2;

        for (auto item : nums2)
            insertForNums2.insert(item);

        for (auto item : nums1)
        {
            if (insertForNums2.find(item) == insertForNums2.end())
                insertForNums1.insert(item);
        }

        return vector<int>(insertForNums1.begin(), insertForNums1.end());
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4, 6};
    V res = obj.findDifference(nums1, nums2);

    for (auto items : res)
    {
        for (auto item : items)
            cout << item << " ";
        cout << endl;
    }
    return 0;
}