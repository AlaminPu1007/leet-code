#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        int n = deck.size();
        vector<int> res(n, 0);
        queue<int> q;

        // sort the array
        sort(deck.begin(), deck.end());

        for (int i = 0; i < n; i++)
            q.push(i);

        for (auto item : deck)
        {
            // get item from queue
            int i = q.front();
            q.pop();

            res[i] = item;

            if (q.size())
            {
                // skip the next element, and put in last of the queue
                q.push(q.front());
                q.pop();
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {17, 13, 11, 2, 3, 5, 7};
    vector<int> res = obj.deckRevealedIncreasing(arr);
    for (auto i : res)
        cout << i << " ";
    return 0;
}