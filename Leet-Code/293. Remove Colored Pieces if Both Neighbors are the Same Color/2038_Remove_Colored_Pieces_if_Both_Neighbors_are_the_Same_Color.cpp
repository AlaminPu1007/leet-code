#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int len = colors.size();

        int a = 0, b = 0;
        if (len > 2)
        {
            for (int i = 0; i < len - 2; i++)
            {
                // for alice
                if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A')
                    a++;
                // for bob
                if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B')
                    b++;
            }
        }
        return (a <= b) ? false : true;
    }
};

int main(void)
{
    Solution obj;
    string str = "AAABABB";
    cout << obj.winnerOfGame(str) << endl;
    return 0;
}