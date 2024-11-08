#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumPushes(string word)
    {
        int n = word.size();
        int freq[26] = {0};
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
            freq[word[i] - 'a']++;

        for (auto item : freq)
            pq.push(item);

        int i = 0, res = 0;

        while (pq.size())
        {
            int value = pq.top();
            pq.pop();

            // there can be 8 distinct button (2 to 9)
            res += value * (1 + i / 8);
            i++;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "xyzxyzxyzxyz";
    cout << obj.minimumPushes(s) << endl;

    return 0;
}