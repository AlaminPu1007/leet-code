#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        int len = s.size();

        map<char, int> Map;

        for (int i = 0; i < len; i++)
        {
            Map[s[i]]++;
        }

        auto item = Map.find(letter);
        if (item != Map.end())
        {

            return (item->second * 100) / len;
        }

        return 0;
    }
};

int main(void)
{
    Solution obj;
    string str = "vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
    int res = obj.percentageLetter(str, 'v');
    cout << res << endl;
    return 0;
}