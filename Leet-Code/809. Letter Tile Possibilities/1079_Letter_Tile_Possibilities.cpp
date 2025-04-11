#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numTilePossibilities(string tiles)
    {
        unordered_set<string> st;
        int n = tiles.size();
        vector<int> visit(n, false);

        Solved("", tiles, st, visit);

        // substract empty string from result
        return st.size() - 1;
    }

private:
    void Solved(string curStr, string tiles, unordered_set<string> &st, vector<int> &visit)
    {
        // store current-string as a result
        st.insert(curStr);

        // iterate over all the characters of the given string
        for (int i = 0; i < tiles.size(); i++)
        {
            // if this character is not visited yet
            if (!visit[i])
            {
                // mark as visited
                visit[i] = true;

                // called recursive approach with next character
                Solved(curStr + tiles[i], tiles, st, visit);

                // while backtrack mark the current character as unvisited
                // due to use of as a another result
                visit[i] = false;
            }
        }
    }
};

int main(void)
{
    Solution obj;
    string str = "AAB";

    cout << obj.numTilePossibilities(str) << endl;

    return 0;
}