#include <bits/stdc++.h>
using namespace std;

class MyCalendarTwo
{
    vector<vector<int>> overlapping, non_overlapping;

public:
    MyCalendarTwo()
    {
    }

    bool book(int start, int end)
    {
        // check it's already have overlapping, count as duplicate
        for (auto item : overlapping)
        {
            int s = item[0], e = item[1];

            if (start < e && s < end)
                return false;
        }

        // check for non- overlapping, allow duplicate as well
        for (auto item : non_overlapping)
        {
            int s = item[0], e = item[1];
            // mark it as overlapping
            if (start < e && s < end)
            {
                overlapping.push_back({max(start, s), min(end, e)});
            }
        }

        non_overlapping.push_back({start, end});
        return true;
    }
};
