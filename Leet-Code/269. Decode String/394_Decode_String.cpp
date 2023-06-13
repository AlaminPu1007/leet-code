#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {
        string ans;
        int i = 0;
        ans = recursiveMethod(s, i, s.length());
        return ans;
    }

private:
    string recursiveMethod(string s, int &i, int len)
    {
        string res;

        while (i < len && s[i] != ']')
        {
            // cout << s[i] << " i---> " << endl;
            // get character from givent string
            if (!isdigit(s[i]))
                // store this charater into result string, increment i, to get next element, next element can be character also
                res += s[i++];

            // it's digit then
            else
            {
                // get digit from givent string
                int n = 0;

                // convert string in digit
                while (i < len && isdigit(s[i]))
                    // we increment i by one, cause next char can also be digit
                    n = n * 10 + s[i++] - '0';

                // after getting the digit from givent string, now increment i by one to avoid this `[`
                i++;

                // cout << i << " " << s << endl;

                // called recursive method to get character from givent string
                string str = recursiveMethod(s, i, len);

                // now increment i by one to avoid this `]`
                i++;

                while (n-- > 0)
                    res += str;

                // cout << t << " " << n << "t--> " << i << endl;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "3[a]2[bc]";
    cout << obj.decodeString(s) << endl;
    return 0;
}