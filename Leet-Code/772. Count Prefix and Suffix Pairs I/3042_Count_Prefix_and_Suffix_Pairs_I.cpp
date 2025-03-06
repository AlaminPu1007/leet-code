#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int n = words.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string &str1 = words[i];
                string &str2 = words[j];

                // if str1 is greater than str2, then avoid to matching string
                if (str1.size() > str2.size())
                    continue;

                // check for prefix matching
                auto isPrefix = str2.find(str1) == 0;

                // check for matching suffix
                auto isSuffix = str2.rfind(str1) == (str2.size() - str1.size());

                if (isPrefix && isSuffix)
                    count++;
            }
        }

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"a", "aba", "ababa", "aa"};
    cout << obj.countPrefixSuffixPairs(arr) << endl;
    return 0;
}