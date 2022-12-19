#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> subdomainVisits(vector<string> &cpdomains)
    {
        unordered_map<string, int> Map;
        vector<string> ans;
        for (auto word : cpdomains)
        {
            // splint integer value from string
            int find_space = word.find(" ");
            int intValue = stoi(word.substr(0, find_space));
            // get string from word
            string str = word.substr(find_space + 1);
            // cout << str << endl;

            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == '.')
                {
                    Map[str.substr(i + 1)] += intValue;
                    // cout << str.substr(i + 1) << endl;
                }
            }
            // push whole string inside hash-map
            Map[str] += intValue;
        }

        for (auto item : Map)
        {
            ans.push_back(to_string(item.second) + " " + (item.first));
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
    vector<string> res = obj.subdomainVisits(str);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}