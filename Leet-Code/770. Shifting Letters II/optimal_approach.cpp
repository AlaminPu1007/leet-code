#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        int n = s.size();
        vector<int> arr, prefixArr(n + 1, 0);

        for (auto item : s)
        {
            int value = (int)item - 'a';
            arr.push_back(value);
        }

        int diff = 0;

        for (auto item : shifts)
        {
            int start = item[0], end = item[1], direction = item[2];

            prefixArr[start] += (direction == 1 ? 1 : -1);
            prefixArr[end + 1] -= (direction == 1 ? 1 : -1);
        }

        for (int i = 0; i < n; ++i)
        {
            diff += prefixArr[i];
            prefixArr[i] = diff;
        }

        for (int i = 0; i < n; ++i)
        {
            int netShift = (prefixArr[i] % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + netShift) % 26;
        }

        return s;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> arr = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};
    string s = "abc";

    cout << obj.shiftingLetters(s, arr) << endl;

    return 0;
}
