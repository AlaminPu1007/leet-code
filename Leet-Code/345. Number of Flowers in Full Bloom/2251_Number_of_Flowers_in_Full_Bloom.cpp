#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;

class Solution
{
public:
    vector<int> fullBloomFlowers(vector<vector<int>> &flowers, vector<int> &people)
    {
        priority_queue<int, vector<int>, greater<int>> start, end;

        for (auto item : flowers)
        {
            start.push(item[0]);
            end.push(item[1]);
        }

        vector<int> res(people.size(), 0);
        vector<iPair> customPeople;

        int len = people.size();

        for (int i = 0; i < len; i++)
        {
            customPeople.push_back({people[i], i});
        }

        // sort custom people
        sort(customPeople.begin(), customPeople.end());
        int count = 0;

        for (int i = 0; i < len; i++)
        {
            // for start element
            while (!start.empty() && start.top() <= customPeople[i].first)
            {
                count++;
                start.pop();
            }
            // for end element
            while (!end.empty() && end.top() < customPeople[i].first)
            {
                count--;
                end.pop();
            }

            res[customPeople[i].second] = count;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> fl = {{1, 6}, {3, 7}, {9, 12}, {4, 13}};
    vector<int> p = {2, 3, 7, 11};
    vector<int> res = obj.fullBloomFlowers(fl, p);

    for (auto item : res)
    {
        cout << item << " ";
    }

    return 0;
}