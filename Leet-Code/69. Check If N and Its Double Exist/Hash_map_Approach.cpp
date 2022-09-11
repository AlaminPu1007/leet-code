// Approach-2, T.C->O(n), S.C->O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int len = arr.size(), count_zero = 0;
        map<int, int> Map;

        for (int i = 0; i < len; i++)
        {
            if (arr[i] == 0)
                count_zero++;
            Map[arr[i]]++;
        }

        if (count_zero > 1)
            return true;

        for (auto item : Map)
        {
            auto find_item = Map.find(item.first * 2);

            if (find_item != Map.end() && item.first != 0)
            {
                cout << item.first << " ";
                return true;
            }
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-2, 0, 10, -19, 4, 6, -8};
    bool res = obj.checkIfExist(arr);

    cout << res << "ans " << endl;

    return 0;
}