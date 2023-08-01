#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string thousandSeparator(int n)
    {
        string str = "", res = "";

        // convert int to string
        str = to_string(n);
        int len = str.size();

        for (int i = 0; i < len; i++)
        {
            if (i > 0 && (len - i) % 3 == 0)
                res += '.';
            res += str[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 78795750;
    cout << obj.thousandSeparator(n) << endl;
    return 0;
}