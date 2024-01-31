#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(string s)
    {
        int n = s.size(), res = 0;
        // count how many 1 are present in root string
        int ones = count(s.begin(), s.end(), '1');
        int zeros = 0;

        // loop till (n-1), if s = "00", output should be 1 instead of 2
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1')
            {
                ones--;
            }
            else
            {
                zeros++;
            }

            res = max(res, zeros + ones);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "0011101";
    cout << obj.maxScore(s) << endl;
    return 0;
}