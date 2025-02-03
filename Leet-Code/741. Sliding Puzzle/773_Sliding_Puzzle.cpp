/*
    The idea behind of this solution is, we convert 2d array to 1d array by converting them into string.
    Then we find the index of the '0' from those string, and then will perform BFS by using directions array.

    Q: Why we choose 2D to 1D?

    Ans: if we use 2D array, the after each swap operation using BFS, every time we need to check the grid is becomes to the target grid.
         That may caused to O(m * n) time complexity.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int slidingPuzzle(vector<vector<int>> &board)
    {
        string target = "123450";
        unordered_map<string, int> visited;
        string curStr = "";

        // define a directions array where every element will traverse with that directions
        vector<vector<int>> directions = {
            {1, 3},    // for 0 positions of the board
            {0, 2, 4}, // for 1 postion of the board
            {1, 5},    // for 2 postion of the board
            {0, 4},    // for 3, (1(row), 0(col)) postion of the board
            {1, 3, 5}, // for 4, (1(row), 1(col)) postion of the board
            {2, 4},    // for 5, (1(row), 2(col)) postion of the board
        };

        for (auto row : board)
            for (auto col : row)
                curStr += to_string(col);

        // { index, {cur_str, length} }
        queue<pair<int, pair<string, int>>> q;

        q.push({(int)curStr.find('0'), {curStr, 0}});

        // marked the state as visited
        visited.insert({curStr, 1});

        while (q.size())
        {
            auto item = q.front();

            // removed to most element from the queue
            q.pop();

            int i = item.first;
            string curStr = item.second.first;
            int length = item.second.second;

            if (curStr == target)
                return length;

            int curZeroIndex = curStr.find('0');

            // iterate over the directions
            for (auto dir : directions[curZeroIndex])
            {
                // make a copy of current string
                string newStr = curStr;

                // swap the string with desire directions
                swap(newStr[dir], newStr[curZeroIndex]);

                // insert only if this is not visited yet
                if (visited.find(newStr) == visited.end())
                {
                    visited[newStr]++;
                    q.push({dir, {newStr, length + 1}});
                }
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{4, 1, 2}, {5, 0, 3}};
    cout << obj.slidingPuzzle(grid) << endl;
    return 0;
}