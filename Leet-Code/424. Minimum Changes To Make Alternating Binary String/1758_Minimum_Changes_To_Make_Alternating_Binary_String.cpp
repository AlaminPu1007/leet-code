
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        int n = s.size();
        int res = 0;

        // except solution is -> 0 1 0 1 0 1 0...n
        // every event index must be '0' and odd index must be '1'
        for (int i = 0; i < n; i++)
        {
            // for even index
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                    res++;
            }
            else
            {
                if (s[i] == '0')
                    res++;
            }
        }
        return min(res, (int)n - res);
    }
};

int main(void)
{
    Solution obj;
    string s = "110010";
    cout << obj.minOperations(s) << endl;
    return 0;
}