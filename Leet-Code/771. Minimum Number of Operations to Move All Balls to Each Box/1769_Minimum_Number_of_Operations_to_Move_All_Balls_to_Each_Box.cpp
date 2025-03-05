#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int n = boxes.size();
        vector<int> res(n, 0);

        int balls = 0, moves = 0;

        for (int i = 0; i < n; i++)
        {
            res[i] = balls + moves;

            // update the moves
            moves = res[i];

            balls += (int)boxes[i] - 48;
        }

        // reinitialized the variables
        balls = 0, moves = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            res[i] += balls + moves;

            // update the moves
            moves = balls + moves;

            balls += (int)boxes[i] - 48;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "001011";
    vector<int> res = obj.minOperations(s);

    for (auto item : res)
        cout << item << " ";
    return 0;
}