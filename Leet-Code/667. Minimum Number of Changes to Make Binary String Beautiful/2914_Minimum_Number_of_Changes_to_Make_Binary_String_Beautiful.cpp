#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minChanges(string s)
    {
        int n = s.size();
        int res = 0;

        int left = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[left])
            {
                // if we have a even length,
                // ex: index are = 0,1,2,3
                if (i % 2 == 1)
                {
                    res++;
                }

                left = i;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "00101111";
    cout << obj.minChanges(s) << endl;
    return 0;
}