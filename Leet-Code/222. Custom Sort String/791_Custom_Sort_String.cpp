#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string customSortString(string order, string s)
    {
        string ans = "";
        int len1 = order.size(), len2 = s.size();
        unordered_map<char, int> map;

        for (auto item : s)
        {
            map[item]++;
        }

        for (auto ch : order)
        {
            auto item = map.find(ch);
            if (item != map.end())
            {
                while (item->second)
                {
                    ans += item->first;
                    item->second--;
                }
                map.erase(item);
            }
        }

        for (auto [ch, v] : map)
        {
            while (v)
            {
                ans += ch;
                v--;
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;

    string order = "cba", s = "abcd";

    string ans = obj.customSortString(order, s);

    cout << ans << " ";

    return 0;
}