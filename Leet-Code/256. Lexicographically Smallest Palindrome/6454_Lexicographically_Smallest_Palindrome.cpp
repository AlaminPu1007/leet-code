
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        int len = s.size() - 1;
        int left = 0, right = s.size() - 1;

        while (left <= right)
        {
            if (s[left] != s[right])
            {
                if (s[left] < s[right])
                {
                    s[right] = s[left];
                }
                else
                    s[left] = s[right];
            }
            left++, right--;
        }
        return s;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.makeSmallestPalindrome("egcfe") << endl;

    return 0;
}
