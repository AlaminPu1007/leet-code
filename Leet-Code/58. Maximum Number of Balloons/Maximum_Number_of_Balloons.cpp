#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        map<char, int> Map;
        int len = text.size();

        for (int i = 0; i < len; i++)
            Map[text[i]]++;

        return min({Map['b'], Map['a'], Map['l'] / 2, Map['o'] / 2, Map['n']});
    }
};

int main(void)
{
    Solution obj;
    string text = "nlaebolko";
    int res = obj.maxNumberOfBalloons(text);

    cout << res << endl;
    return 0;
}