#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
    {
        int n = players.size(), m = trainers.size();
        int res = 0;

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int j = 0, i = 0;

        while (i < n && j < m)
        {
            if (players[i] <= trainers[j])
            {
                res++;
                i++;
            }
            j++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> players = {1, 1, 1}, trainers = {10};

    cout << obj.matchPlayersAndTrainers(players, trainers) << endl;

    return 0;
}