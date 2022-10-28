#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> result;
        int len = strs.size();
        // need an un-order map to store key the original string, and value of string vector of similar string
        unordered_map<string, vector<string>> Map;

        // Make an key-value pairs with Map
        for (auto item : strs)
        {
            Map[SortString(item)].push_back(item);
        }
        for (auto item : Map)
            result.push_back(item.second);

        return result;
    }

private:
    // using counting sort to improve the time complexity
    string SortString(string str)
    {
        int freq[26] = {0}, len = str.size();
        for (int i = 0; i < len; i++)
        {
            freq[str[i] - 'a']++;
        }
        string copy_str;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i])
                copy_str += string(freq[i], i + 'a');
        }

        return copy_str;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = obj.groupAnagrams(str);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";

        cout << endl;
    }
    return 0;
}