#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int n = version1.size(), m = version2.size();

        int i = 0, j = 0;

        while (i < n || j < m)
        {
            int x1 = getReversion(version1, i);
            int x2 = getReversion(version2, j);

            if (x1 > x2)
                return 1;

            else if (x2 > x1)
                return -1;
        }
        return 0;
    }

private:
    int getReversion(string str, int &i)
    {
        int res = 0;

        while (i < str.size() && str[i] != '.')
        {
            res = res * 10 + (str[i] - '0');
            i++;
        }
        // skip the '.'(dot) from next character
        i++;
        return res;
    }
};

int main(void)
{
    Solution obj;
    string version1 = "1.0", version2 = "1.0.0";
    cout << obj.compareVersion(version1, version2) << endl;
    return 0;
}