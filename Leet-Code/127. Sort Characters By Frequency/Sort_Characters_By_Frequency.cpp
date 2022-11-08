#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        int len = s.length();
        vector< pair <int, char> > items;
        map<char, int> Map;
        
        for(int i = 0; i < len; i++)
        {
           Map[s[i]]++;
        }
        
        for(auto item: Map)
        {
            items.push_back({item.second, item.first});
        }
        
        sort(items.begin(), items.end(), greater<>());
        
        string ans = "";
        
        for(auto item:items)
        {
            while(item.first--)
            {
                ans += item.second;
            }
        }
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.frequencySort("Aabb");
    cout<<ans<<endl;
    return 0;
}