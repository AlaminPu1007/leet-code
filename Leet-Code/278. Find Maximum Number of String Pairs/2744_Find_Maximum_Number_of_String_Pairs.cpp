
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumNumberOfStringPairs(vector<string> &words)
    {
        int len = words.size(), res = 0;

        // need an un-order map to store key the original string, and value of string vector of similar string
        map<string, int> Map;

        for (auto item : words)
        {
            Map[SortString(item)]++;
        }

        for (auto item : Map)
        {
            // cout << item.first << " " << item.second << endl;
            if (item.second > 1)
                res++;
        }

        return res;
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
    vector<string> words = {"cd", "ac", "dc", "ca", "zz"};
    cout << obj.maximumNumberOfStringPairs(words) << endl;
    return 0;
}