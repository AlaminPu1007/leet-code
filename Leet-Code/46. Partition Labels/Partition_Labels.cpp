#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int len = s.length();
        map<char, int> Map;

        for (int i = 0; i < len; i++)
            // put character with their index
            Map[s[i]] = i;

        vector<int> result;
        int end = Map[s[0]], start = 0;

        for (int i = 0; i < len; i++)
        {
            if (i > end)
            {
                result.push_back(end - start + 1);
                start = i;
                end = Map[s[i]];
            }
            else if (Map[s[i]] > end)
            {
                end = Map[s[i]];
            }
        }

        result.push_back(end - start + 1);

        return result;
    }
};

int main(void)
{
    Solution obj;
    string s = "ababcbacadefegdehijhklij";
    vector<int> result = obj.partitionLabels(s);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}