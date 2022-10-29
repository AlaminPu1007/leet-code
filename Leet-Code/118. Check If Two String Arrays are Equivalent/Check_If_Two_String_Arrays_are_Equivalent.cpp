#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int len1 = word1.size(), len2 = word2.size();

        for (int i = 0; i < (len1 - 1); i++)
            word1[0] += word1[i + 1];

        for (int i = 0; i < (len2 - 1); i++)
            word2[0] += word2[i + 1];

        return word1[0] == word2[0];
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr1 = {"abc", "d", "defg"}, arr2 = {"abcddefg"};

    bool res = obj.arrayStringsAreEqual(arr1, arr2);
    cout << res << endl;

    return 0;
}