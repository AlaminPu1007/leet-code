#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        int n = s.size(), m = goal.size();

        if (n != m)
            return false;

        if (s == goal)
        {
            // If we have 2 same characters in string 's',
            // we can swap them and still strings will remain equal.

            int freq[26] = {0};

            for (int i = 0; i < n; i++)
            {
                freq[s[i] - 'a']++;

                if (freq[s[i] - 'a'] == 2)
                    return true;
            }
            return false;
        }

        int firstIndex = -1, secondIndex = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != goal[i])
            {
                if (firstIndex == -1)
                    firstIndex = i;

                else if (secondIndex == -1)
                    secondIndex = i;

                // We have atleast 3 indices with different characters,
                // thus, we can never make strings equal with only one swap.
                else
                    return false;
            }
        }

        // We can't swap if character at only one index is different.
        if (secondIndex == -1)
            return false;

        return s[firstIndex] == goal[secondIndex] && s[secondIndex] == goal[firstIndex];
    }
};

int main(void)
{
    Solution obj;
    string s = "ab", goal = "ab";
    cout << obj.buddyStrings(s, goal) << endl;
    return 0;
}