#include <bits/stdc++.h>
using namespace std;

// Approach-1
class SeatManager
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int marker = 1;

public:
    SeatManager(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }
    }

    int reserve()
    {

        int seatNum = pq.top();
        pq.pop();

        return seatNum;
    }

    void unreserve(int seatNumber)
    {
        pq.push(seatNumber);
    }
};

// Approach-2
class SeatManager
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int marker = 1;

public:
    SeatManager(int n)
    {
    }

    int reserve()
    {

        if (!pq.empty())
        {
            int seatNum = pq.top();
            pq.pop();
            return seatNum;
        }

        int seatNum = marker;
        marker++;

        return seatNum;
    }

    void unreserve(int seatNumber)
    {
        pq.push(seatNumber);
    }
};
