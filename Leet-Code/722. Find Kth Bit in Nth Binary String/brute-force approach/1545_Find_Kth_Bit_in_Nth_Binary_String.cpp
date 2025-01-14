#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findKthBit(int n, int k)
    {
        string str = "0";

        for (int i = 1; i < n; i++)
        {
            string newStr = str;
            newStr += '1';

            for (int j = str.length() - 1; j >= 0; j--)
                newStr += str[j] == '0' ? '1' : '0';

            str = newStr;
        }

        return str[k - 1];
    }
};

int main(void)
{
    Solution obj;
    int n = 3, k = 1;
    cout << obj.findKthBit(n, k) << endl;
    return 0;
}