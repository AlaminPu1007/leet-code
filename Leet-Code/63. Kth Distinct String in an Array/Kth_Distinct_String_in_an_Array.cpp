#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        int count = 0, len = arr.size();
        map<string, int> Map;

        for (int i = 0; i < len; i++)
            Map[arr[i]]++;

        for (int i = 0; i < len; i++)
        {
            if (Map[arr[i]] == 1)
                count++;

            if (k == count)
                return arr[i];
        }
        return "";
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"d", "b", "c", "b", "c", "a"};
    obj.kthDistinct(arr, 2);
    return 0;
}