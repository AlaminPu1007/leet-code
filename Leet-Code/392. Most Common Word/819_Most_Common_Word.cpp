#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_map<string, int> Map;
        string s = "";
        int n = paragraph.size();

        // make word for each string

        for (int i = 0; i < n; i++)
        {
            if ((paragraph[i] >= 'A' && paragraph[i] <= 'Z') || (paragraph[i] >= 'a' && paragraph[i] <= 'z'))
            {
                s += tolower(paragraph[i]);
            }
            else
            {
                if (s.size())
                    Map[s]++;

                s = "";
            }
        }

        // if any word is remaining
        if (s.size())
            Map[s]++;

        // removed banned word from hash-table
        for (auto item : banned)
        {
            Map[item] = 0;
        }

        int res = 0;
        string ans = "";

        // calculate the result
        for (auto item : Map)
        {
            if (res < item.second)
            {
                ans = item.first;
                res = item.second;
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string paragraph = "Bob. hIt, baLl";
    vector<string> banned = {"bob", "hit"};

    string res = obj.mostCommonWord(paragraph, banned);
    cout << res << endl;

    return 0;
}