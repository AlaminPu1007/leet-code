#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        int len = paths.size();
        map<string, int> Map;

        for (auto item : paths)
        {
            Map[item[0]]++;
        }

        for (auto item : paths)
        {
            auto find_item = Map.find(item[1]);

            if (find_item == Map.end())
                return item[1];
        }

        return "";
    }
};

int main(void)
{
    Solution obj;
    vector<vector<string>> paths = {{"London", "New York"}, {"New York", "Lima"}, {"Lima", "Sao Paulo"}};
    obj.destCity(paths);
    return 0;
}