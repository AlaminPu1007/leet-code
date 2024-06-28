/*
    This is the brute force approach of this solution
*/
#include <bits/stdc++.h>
using namespace std;

class SummaryRanges
{
    unordered_set<int> st;

public:
    SummaryRanges()
    {
    }

    void addNum(int value)
    {
        st.insert(value);
    }

    vector<vector<int>> getIntervals()
    {
        vector<int> temp;
        for (auto item : st)
            temp.push_back(item);

        sort(temp.begin(), temp.end());

        vector<vector<int>> res;
        int i = 0;

        while (i < temp.size())
        {
            int startValue = temp[i];

            while (i + 1 < temp.size() && temp[i] + 1 == temp[i + 1])
                i++;

            res.push_back({startValue, temp[i]});
            i++;
        }

        return res;
    }
};
