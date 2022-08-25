#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        int len1 = list1.size(), len2 = list2.size();
        vector<string> res;
        map<string, int> Map;

        int min = INT_MAX;

        for (int i = 0; i < len1; i++)
            Map[list1[i]] = i;

        for (int i = 0; i < len2; i++)
        {
            auto item = Map.find(list2[i]);

            if (item != Map.end())
            {
                if (min > (i + item->second))
                {
                    min = i + item->second;
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if ((i + item->second) == min)
                    res.push_back(list2[i]);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"}, list2 = {"KFC", "Shogun", "Burger King"};
    vector<string> result = obj.findRestaurant(list1, list2);

    int len = result.size();
    for (int i = 0; i < len; i++)
        cout << result[i] << " ";

    return 0;
}