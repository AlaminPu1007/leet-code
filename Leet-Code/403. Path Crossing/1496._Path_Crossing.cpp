#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPathCrossing(string path)
    {
        unordered_map<char, pair<int, int>> moves;
        moves['N'] = {0, 1};
        moves['S'] = {0, -1};
        moves['E'] = {1, 0};
        moves['W'] = {-1, 0};

        unordered_set<string> visited;
        // put source path
        visited.insert("0,0");

        int x = 0, y = 0;

        for (auto c : path)
        {
            pair<int, int> curr = moves[c];

            int dx = curr.first;
            int dy = curr.second;

            x += dx;
            y += dy;

            string makePath = to_string(x) + "," + to_string(y);

            if (visited.find(makePath) != visited.end())
                return true;

            visited.insert(makePath);
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    string s = "NESWW";
    cout << obj.isPathCrossing(s) << endl;
    return 0;
}