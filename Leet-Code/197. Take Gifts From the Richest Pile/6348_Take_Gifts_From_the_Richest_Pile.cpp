#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        long long len = gifts.size();
        priority_queue<int> pq;

        for (auto item : gifts)
            pq.push(item);

        long long ans = 0;

        while (k--)
        {
            pq.push(sqrt(pq.top()));
            pq.pop();
        }

        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> gifts = {25, 64, 9, 4, 100};
    long long res = obj.pickGifts(gifts, 4);
    cout << res << endl;
    return 0;
}