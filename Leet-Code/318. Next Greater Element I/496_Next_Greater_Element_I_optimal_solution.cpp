#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int len1 = nums1.size(), len2 = nums2.size();
        stack<int> st;
        unordered_map<int, int> Map;

        for (int i = 0; i < len2; i++)
        {
            while (!st.empty() && st.top() < nums2[i])
            {
                // this is the next greater element of previous item
                Map[st.top()] = nums2[i];

                // removed top most element from stack
                st.pop();
            }

            // push-item into stack
            st.push(nums2[i]);
        }

        // iterate over the nums1 array, if we could find greater element from map, then store it
        for (int i = 0; i < len1; i++)
        {
            nums1[i] = Map.count(nums1[i]) ? Map[nums1[i]] : -1;
        }

        return nums1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> n1 = {4, 1, 2}, n2 = {1, 3, 4, 2};
    vector<int> res = obj.nextGreaterElement(n1, n2);

    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}