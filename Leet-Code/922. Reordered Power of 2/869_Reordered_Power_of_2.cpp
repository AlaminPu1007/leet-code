#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        string target = getDigit(n);

        // iterate till 2^30. 2^31 is too large for 32bits integer
        for (int i = 0; i < 31; i++)
        {
            // this is similar to 2^i. the multiple of 2
            string value = getDigit(1 << i);

            if (value == target)
                return true;
        }

        return false;
    }

private:
    string getDigit(int n)
    {
        string value = to_string(n);
        sort(value.begin(), value.end());

        return value;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.reorderedPowerOf2(1) << endl;

    return 0;
}