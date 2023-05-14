/**
 * only one character is added to the window while one is removed,
 * Therefore, we can represent the new window by keeping track of the changes between adjacent windows
 * 1 -> If the newly added character s[i] is a vowel, we increase count by 1.
 * 2 -> If the newly removed character s[i - k] is a vowel, we reduce count by 1.
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int res = 0, len = s.size();
        int count = 0;
        int l = 0;

        // count first window vowels
        for (int i = 0; i < k; i++)
            if (st.find(s[i]) != st.end())
                count++;

        // update res by count
        res = count;

        // check other window except first one
        for (int i = k; i < len; i++)
        {
            // If the newly removed character (s[l] or s[i-k]) is a vowel, we reduce count by 1.
            if (st.find(s[l]) != st.end())
                count--;
            l++;

            if (st.find(s[i]) != st.end())
                count++;

            res = max(res, count);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "tryhard";
    int k = 4;
    cout << obj.maxVowels(s, k) << endl;
    return 0;
}