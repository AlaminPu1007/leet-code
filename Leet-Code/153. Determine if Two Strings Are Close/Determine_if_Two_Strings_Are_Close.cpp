#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {

        int len1 = word1.length(), len2 = word2.length();

        if (len1 != len2)
            return false;

        set<char> Map1, Map2;
        vector<int> item1(26, 0), item2(26, 0);

        for (int i = 0; i < len1; i++)
        {
            Map1.insert(word1[i]);
            Map2.insert(word2[i]);

            item1[word1[i] - 'a']++;
            item2[word2[i] - 'a']++;
        }

        // for (auto it = Map1.begin(); it != Map1.end(); it++)
        // {
        //     cout << *it << " ";
        // }

        // sort vector will cause time-complexity O(n*log(n))
        sort(item1.begin(), item1.end());
        sort(item2.begin(), item2.end());

        // for (int i = 0; i < item1.size(); i++)
        //     cout << item1[i] << " " << item2[i] << endl;

        bool res = (Map1 == Map2), res2 = (item1 == item2);

        if (res && res2)
            return true;

        return false;
    }
};

int main(void)
{

    Solution obj;
    bool res = obj.closeStrings("uau", "ssx");
    cout << res << endl;
    return 0;
}

//"cabbba"
// "abbccc"