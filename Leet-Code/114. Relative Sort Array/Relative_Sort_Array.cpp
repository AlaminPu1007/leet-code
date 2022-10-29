#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        int len = arr1.size(), len2 = arr2.size();
        map<int, int> Map;

        for (int i = 0; i < len; i++)
            Map[arr1[i]]++;

        int pos = 0;

        for (int i = 0; i < len2; i++)
        {
            while (Map[arr2[i]]-- > 0)
            {
                arr1[pos++] = arr2[i];
            }
        }

        for (auto item : Map)
        {
            while (item.second-- > 0)
                arr1[pos++] = item.first;
        }

        return arr1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19}, arr2 = {2, 1, 4, 3, 9, 6};
    vector<int> res = obj.relativeSortArray(arr1, arr2);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}