#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int possibleStringCount(string word)
    {
        int n = word.size();
        unordered_map<char, int> Map;

        int res = 1;

        for (int i = 1; i < n; i++)
            if (word[i] == word[i - 1])
                res++;

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "abbcccc";

    cout << obj.possibleStringCount(str) << endl;

    return 0;
}