/**
 * This solution will give us, Time Limit Exceeded.
 * The idea behind of this solution is to just find the longest prefix palindrome from given string;
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string shortestPalindrome(string s)
    {
        int n = s.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (isPalindrome(s, 0, i))
            {
                string tempStr = s.substr(i + 1, -1);
                reverse(tempStr.begin(), tempStr.end());
                s = tempStr + s;
                return s;
            }
        }
        return "";
    }

private:
    bool isPalindrome(string &s, int left, int right)
    {
        while (left <= right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.shortestPalindrome("aacecaaa") << endl;
    return 0;
}