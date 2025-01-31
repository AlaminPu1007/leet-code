#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int takeCharacters(string s, int k)
    {
        int left = 0;
        int res = 0;

        vector<int> count(3, 0);

        // count each character total frequency or occurrences
        for (auto ch : s)
            count[ch - 'a']++;

        // check if already it's invalid
        for (int i = 0; i < 3; i++)
            if (count[i] < k)
                return -1;

        vector<int> curWindow(3, 0);

        for (int i = 0; i < s.size(); i++)
        {

            int curChar = s[i] - 'a';

            // calculate current character occurrences
            curWindow[curChar]++;

            // move left pointer as much as possible
            // ex: a a b a a a a c a a b c
            while (left <= i && (count[0] - curWindow[0] < k || count[1] - curWindow[1] < k || count[2] - curWindow[2] < k))
            {

                curWindow[s[left] - 'a']--;
                left++;
            }

            res = max(res, i - left + 1);
        }

        return s.size() - res;
    }
};

int main(void)
{
    Solution obj;
    string str = "aabaaaacaabc";
    cout << obj.takeCharacters(str, 2) << endl;
    return 0;
}