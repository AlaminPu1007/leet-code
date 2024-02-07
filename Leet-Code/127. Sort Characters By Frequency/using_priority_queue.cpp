#include <bits/stdc++.h>
using namespace std;

typedef pair<char, int> iPair;

class Solution
{
public:
    string frequencySort(string s)
    {

        auto cmp = [](const iPair &a, const iPair &b)
        {
            return a.second < b.second;
        };

        int n = s.size();
        priority_queue<iPair, vector<iPair>, decltype(cmp)> pq(cmp);
        unordered_map<char, int> Map;

        string ans = "";

        // count each character frequency
        for (auto c : s)
            Map[c]++;

        // get descending order of character
        for (auto item : Map)
            pq.push({item.first, item.second});

        while (pq.size())
        {
            char c = pq.top().first;
            int value = pq.top().second;

            pq.pop();

            ans.append(value, c);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "Aabb";
    cout << obj.frequencySort(s) << endl;
    return 0;
}