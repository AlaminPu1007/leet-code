#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> ans;
        map<int, string> Map;
        int len = names.size();
        for (int i = 0; i < len; i++)
        {
            Map[heights[i]] = names[i];
        }

        for (auto item : Map)
            ans.push_back(item.second);

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};

    vector<string> ans = obj.sortPeople(names, heights);

    for (auto item : ans)
        cout << item << " ";

    return 0;
}