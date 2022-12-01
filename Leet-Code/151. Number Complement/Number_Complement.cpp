#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        vector<int> bin;

        while (num != 0)
        {
            int value = num % 2;
            bin.push_back(value);
            num /= 2;
        }

        int len = bin.size();

        for (int i = 0; i < len; i++)
        {
            if (bin[i] == 0)
                bin[i] = 1;

            else
                bin[i] = 0;
        }

        int res = 0;

        for (int i = len - 1; i >= 0; i--)
        {
            res = res * 2 + bin[i];
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.findComplement(5);
    cout << res << endl;
    return 0;
}