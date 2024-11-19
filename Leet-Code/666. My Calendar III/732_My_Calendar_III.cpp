#include <bits/stdc++.h>
using namespace std;

class MyCalendarThree
{
    map<int, int> Map;
    int maxCount = 0;

public:
    MyCalendarThree()
    {
    }

    int book(int startTime, int endTime)
    {
        // mark start interval as 1, and ending interval as -1,
        // that help us to detect a interval start and ending cost
        Map[startTime]++;
        Map[endTime]--;
        int count = 0;

        // iterate over the map and count all interval from start to end
        for (auto item : Map)
        {
            count += item.second;
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};