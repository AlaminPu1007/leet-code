#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson)
    {

        // define a unordered_map to hold the unordered as a graph
        // it will hold {current_node, {connected_node, time}} vice-versa
        unordered_map<int, vector<pair<int, int>>> graph;

        //  add edges from person A to B and B to A with meeting duration
        for (auto m : meetings)
        {
            graph[m[0]].push_back({m[1], m[2]});
            graph[m[1]].push_back({m[0], m[2]});
        }

        // Earliest time at which a person learned the secret
        // as per current state of knowledge.
        vector<int> earliest(n, INT_MAX);

        // mark first meeting as a zero according to the problem description
        earliest[0] = 0;
        earliest[firstPerson] = 0;

        // make a dfs called to traverse the graph
        // (person, time, graph, earliest)
        DFS(0, 0, graph, earliest);

        DFS(firstPerson, 0, graph, earliest);

        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (earliest[i] != INT_MAX)
                res.push_back(i);
        }
        return res;
    }

private:
    void DFS(int person, int time, unordered_map<int, vector<pair<int, int>>> &graph, vector<int> &earliest)
    {
        for (auto item : graph[person])
        {
            int nextPerson = item.first;
            int t = item.second;

            if (t >= time && earliest[nextPerson] > t)
            {
                earliest[nextPerson] = t;
                DFS(nextPerson, t, graph, earliest);
            }
        }
    };
};

int main()
{
    Solution obj;

    int n = 5, firstPerson = 3;
    vector<vector<int>> meetings = {{1, 4, 3}, {0, 4, 3}};
    vector<int> res = obj.findAllPeople(n, meetings, firstPerson);

    for (auto item : res)
        cout << item << " ";

    return 0;
}