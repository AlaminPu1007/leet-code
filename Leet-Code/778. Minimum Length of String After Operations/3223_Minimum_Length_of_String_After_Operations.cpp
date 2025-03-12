#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumLength(string s)
    {
        int res = 0, n = s.size();
        vector<int> freq(26, 0);

        for (auto ch : s)
            freq[ch - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
                continue;

            if (freq[i] % 2 == 0)
                res += 2;
            else
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "abaacbcbb";

    cout << obj.minimumLength(s) << endl;
    return 0;
}