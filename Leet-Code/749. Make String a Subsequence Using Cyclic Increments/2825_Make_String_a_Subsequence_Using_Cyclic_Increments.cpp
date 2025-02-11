#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeSubsequence(string str1, string str2)
    {
        int i = 0, j = 0, n = str1.size(), m = str2.size();

        if (n < m)
            return false;

        while (i < n && j < m)
        {
            if (str1[i] == str2[j] || str2[j] == str1[i] + 1 || str1[i] - 25 == str2[j])
                j++;

            i++;
        }

        return j == m;
    }
};

int main(void)
{
    Solution obj;
    string str1 = "abcz", str2 = "ad";
    cout << obj.canMakeSubsequence(str1, str2) << endl;
    return 0;
}