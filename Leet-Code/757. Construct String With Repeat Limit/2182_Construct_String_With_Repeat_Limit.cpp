#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string repeatLimitedString(string s, int repeatLimit)
    {
        unordered_map<char, int> freq;
        priority_queue<char> pq;

        string res;

        for (auto ch : s)
            freq[ch]++;

        for (auto item : freq)
            pq.push(item.first);

        while (pq.size())
        {
            char ch = pq.top();
            pq.pop();

            int count = freq[ch];
            int new_value = min(repeatLimit, count);

            res.append(new_value, ch);

            freq[ch] -= new_value;

            if (freq[ch] > 0 && !pq.empty())
            {
                int next_ch = pq.top();
                pq.pop();

                res.push_back(next_ch);

                freq[next_ch]--;

                if (freq[next_ch] > 0)
                    pq.push(next_ch);

                pq.push(ch);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "cczazcc";

    cout << obj.repeatLimitedString(s, 3) << endl;
    return 0;
}