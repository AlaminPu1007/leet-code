#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string res = "";
        int j = 0, n = s.size(), m = spaces.size();

        for (int i = 0; i < n; i++)
        {
            if (j < m && i == spaces[j])
            {
                res += ' ';
                j++;
            }
            res += s[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "spacing";
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6};

    cout << obj.addSpaces(str, arr) << endl;
    return 0;
}