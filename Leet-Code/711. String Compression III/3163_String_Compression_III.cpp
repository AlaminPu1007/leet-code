#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string compressedString(string word)
    {
        int n = word.size();
        string res = "";

        for (int i = 0; i < n; i++)
        {
            int j = 1;
            char prv = word[i];

            while (i < n && prv == word[i + 1] && j < 9)
            {
                i++;
                j++;
            }

            res += to_string(j) + prv;
        }

        return res;
    }
};

int main(void)
{
    string str = "abcde";
    Solution obj;

    cout << obj.compressedString(str) << endl;
    return 0;
}