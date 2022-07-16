#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int len = s.length(), sum = 0;
        for (int i = 0; i < len; i++)
        {
            switch (s[i])
            {

            case 'M':
                sum += 1000;
                break;
            case 'D':
                sum += 500;
                break;
            case 'C':
                sum += (s[i + 1] == 'D' || s[i + 1] == 'M') ? -100 : 100;
                break;
            case 'L':
                sum += 50;
                break;
            case 'X':
                sum += (s[i + 1] == 'L' || s[i + 1] == 'C') ? -10 : 10;
                break;
            case 'V':
                sum += 5;
                break;
            case 'I':
                sum += (s[i + 1] == 'X' || s[i + 1] == 'V') ? -1 : 1;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};

int main(void)
{
    Solution obj;
    string str = "LVIII";
    obj.romanToInt(str);
    return 0;
}