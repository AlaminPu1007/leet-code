#include <bits/stdc++.h>
using namespace std;

typedef pair<int, char> iPair;

class Solution
{
public:
    string reorganizeString(string s)
    {
        int len = s.size();
        string res = "";
        int l = 0, r = len - 1;

        // define priority queue
        priority_queue<iPair> pq;

        // define hash map to store key-value pairs of string
        unordered_map<char, int> Map;

        for (int i = 0; i < len; i++)
            Map[s[i]]++;

        for (auto item : Map)
        {
            pq.push({item.second, item.first});
        }

        int copyInt = -1;
        char copyChar = '\0';

        while (pq.size() > 1)
        {

            iPair item1 = pq.top();
            pq.pop();

            iPair item2 = pq.top();
            pq.pop();

            res += char(item1.second);
            res += char(item2.second);

            --item1.first;
            --item2.first;

            if (item1.first)
                pq.push(item1);

            if (item2.first)
                pq.push(item2);
        }

        if (!pq.empty())
        {
            if (pq.top().first == 1)
                res += char(pq.top().second);

            else
                return "";
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "aab";
    cout << obj.reorganizeString(s) << endl;
    return 0;
}