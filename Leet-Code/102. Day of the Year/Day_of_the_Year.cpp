#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dayOfYear(string date)
    {
        int len = date.size(), res = 0;
        int day_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // convert string to int (YYYY-MM-DD)
        int Year = stoi(date.substr(0, 4));
        int Month = stoi(date.substr(5, 7));
        int Day = stoi(date.substr(8, 10));

        if (Month >= 2)
        {
             if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
            {
                day_of_month[1] = 29;
            }
        }

        for (int i = 0; i < Month - 1; i++)
        {

            res += day_of_month[i];
        }

        return res + Day;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.dayOfYear("2004-03-01");
    cout << res << endl;
    return 0;
}