#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwaps(string s)
    {
        int maxCount = 0, closeCount = 0;
        for (auto c : s)
        {
            if (c == ']')
                closeCount++;

            else
                closeCount--;

            maxCount = max(closeCount, maxCount);
        }
        /*
            to balance X unmatched closing brackets, we need at least ceil(X / 2) swaps.
            This is because each swap can resolve two unmatched brackets:
            one opening bracket '[' from the later part of the string
            is swapped with a closing bracket ']' in the earlier part.
        */
        return (maxCount + 1) / 2;
    }
};

int main(void)
{
    Solution obj;
    string s = "]]][[[";
    cout << obj.minSwaps(s) << endl;
    return 0;
}