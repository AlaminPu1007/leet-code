#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        int n = matches.size();
        vector<vector<int>> res;

        unordered_map<int, int> lost;

        for (auto item : matches)
            lost[item[1]]++;

        vector<int> winner, loses;

        for (auto item : matches)
        {
            int winnerItem = item[0];
            int loseItem = item[1];

            if (lost.find(winnerItem) == lost.end())
            {
                winner.push_back(winnerItem);
                lost[winnerItem] = 2;
            }

            if (lost[loseItem] == 1)
                loses.push_back(loseItem);
        }

        sort(winner.begin(), winner.end());
        sort(loses.begin(), loses.end());

        return {winner, loses};
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matches = {{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    vector<vector<int>> res = obj.findWinners(matches);
    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}