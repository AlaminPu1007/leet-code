#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n = s1.size(), m = s2.size();
        if (n > m)
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        for (int i = 0; i < n; i++)
        {
            int idx = s1[i] - 'a';
            int idx2 = s2[i] - 'a';
            freq1[idx]++;
            freq2[idx2]++;
        }
        int matches = 0;

        // check how many of matches currently they have
        for (int i = 0; i < 26; i++)
            if (freq1[i] == freq2[i])
                matches++;

        int left = 0;

        for (int i = n; i < m; i++)
        {
            if (matches == 26)
                return true;

            // Update for the character entering the window
            int idx1 = s2[i] - 'a';
            freq2[idx1]++;

            if (freq1[idx1] == freq2[idx1])
                matches++;

            else if (freq1[idx1] + 1 == freq2[idx1])
                matches--;

            // Update for the character exiting the window
            // removed character from begin
            
            int idx2 = s2[left] - 'a';
            freq2[idx2]--;

            if (freq1[idx2] == freq2[idx2])
                matches++;

            else if (freq1[idx2] - 1 == freq2[idx2])
                matches--;

            // Move the left pointer
            left++;
        }
        return matches == 26;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.checkInclusion("ab", "eidbaooo") << endl;
    return 0;
}