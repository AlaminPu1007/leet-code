#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int count = 0;

        for (auto item : words)
            // check prefix contiguous substring
            if (item.find(pref) == 0)
                count++;

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"pay", "attention", "practice", "attend"};

    cout << obj.prefixCount(words, "at") << endl;
    return 0;
}