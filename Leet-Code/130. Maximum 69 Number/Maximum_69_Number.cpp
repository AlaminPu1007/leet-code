#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        string ans = to_string(num);

        for (int i = 0; ans[i] != '\0'; i++)
        {
            if (ans[i] == '6')
            {
                ans[i] = '9';
                break;
            }
        }
        return stoi(ans);
    }
};

int main(void)
{
    Solution obj;
    int res = obj.maximum69Number(9669);
    cout << res << endl;
    return 0;
}