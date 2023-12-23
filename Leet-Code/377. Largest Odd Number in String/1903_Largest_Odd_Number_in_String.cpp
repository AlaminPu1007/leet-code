#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        int n = num.size();

        for (int i = n - 1; i >= 0; i--)
        {
            // convert string to number
            int value = (int)num[i] - '0';
            if (value % 2 == 1)
                return num.substr(0, i + 1);
        }

        return "";
    }
};

int main(void)
{
    Solution obj;
    string s = "35427";
    cout << obj.largestOddNumber(s) << endl;
    return 0;
}