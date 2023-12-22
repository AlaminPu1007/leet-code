#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestGoodInteger(string num)
    {
        int n = num.size();
        string ans = "", res = "";
        ans += num[0];

        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (num[i] == num[i - 1])
            {
                count++;
                ans += num[i];
            }
            else
            {
                count = 1;
                ans = num[i];
            }

            if (count == 3)
            {
                res = max(res, ans);
            }
        }

        return res.size() == 3 ? res : "";
    }
};

int main(void)
{
    Solution obj;
    string num = "6777133339";
    cout << obj.largestGoodInteger(num) << endl;
    return 0;
}