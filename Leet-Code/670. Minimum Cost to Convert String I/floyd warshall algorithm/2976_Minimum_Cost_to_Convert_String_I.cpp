#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long minimumCost(string source, string target, vector<char> &original, vector<char> &changed, vector<int> &cost)
    {
        // create a adjacency list matrix
        vector<vector<long long>> adjMatrix(26, vector<long long>(26, INT_MAX));

        // fill adjMatrix with initial value
        for (int i = 0; i < original.size(); i++)
        {
            int s = original[i] - 'a';
            int t = changed[i] - 'a';

            adjMatrix[s][t] = (long long)cost[i];
        }

        // self node reached cost always 0
        for (int i = 0; i < 26; i++)
            adjMatrix[i][i] = 0;

        for (int k = 0; k < 26; ++k)
        {
            for (int i = 0; i < 26; ++i)
            {
                for (int j = 0; j < 26; ++j)
                {
                    adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
                }
            }
        }

        long long res = 0;

        for (int i = 0; i < source.size(); i++)
        {
            if (source[i] == target[i])
            {
                continue;
            }

            if (adjMatrix[source[i] - 'a'][target[i] - 'a'] == INT_MAX)
            {
                return -1;
            }

            res += adjMatrix[source[i] - 'a'][target[i] - 'a'];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string source = "abcd", target = "acbe";
    vector<char> original = {'a', 'b', 'c', 'c', 'e', 'd'},
                 changed = {'b', 'c', 'b', 'e', 'b', 'e'};
    vector<int> cost = {2, 5, 5, 1, 2, 20};

    cout << obj.minimumCost(source, target, original, changed, cost) << endl;

    return 0;
}