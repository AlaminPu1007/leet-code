#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> Map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0, len = s.length();

        for (int i = 0; i < len; i++)
        {
            if (Map[s[i]] >= Map[s[i + 1]])
            {
                sum += Map[s[i]];
            }
            else
                sum -= Map[s[i]];
        }
        return sum;
    }
};

int main(void)
{
    Solution obj;
    string str = "MCMXCIV";
    obj.romanToInt(str);
    return 0;
}