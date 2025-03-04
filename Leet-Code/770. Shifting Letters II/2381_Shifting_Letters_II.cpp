// This solution will give us "Time Limit Exceeded".

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        int n = s.size();
        vector<int> arr;

        for (auto item : s)
        {
            int value = (int)item - 'a';
            arr.push_back(value);
        }

        for (auto item : shifts)
        {
            int start = item[0], end = item[1], direction = item[2];

            if (direction == 1)
            {
                for (int i = start; i <= end; i++)
                    arr[i] = (arr[i] + 1) % 26;
            }
            else
            {
                for (int i = start; i <= end; i++)
                    arr[i] = ((arr[i] - 1 + 26) % 26);
            }
        }

        string ans = "";

        for (auto item : arr)
            ans += (char)item + 'a';

        return ans;
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