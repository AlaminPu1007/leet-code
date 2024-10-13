#include <bits/stdc++.h>
using namespace std;

class Solution
{
  typedef pair<long long int, int> iPair;

public:
  int mostBooked(int n, vector<vector<int>> &meetings)
  {
    int m = meetings.size();
    int res = -1;

    // sort the meetings array
    sort(meetings.begin(), meetings.end());

    // define priority queue
    priority_queue<iPair, vector<iPair>, greater<iPair>> usedRooms;
    priority_queue<int, vector<int>, greater<int>> availableRooms;

    // initialize a vector to keep track of count each no of room used frequency
    vector<int> countRoomUsed(n, 0);

    // insert all room into queue
    for (int i = 0; i < n; i++)
      availableRooms.push(i);

    for (auto item : meetings)
    {
      int start = item[0];
      int end = item[1];
      int duration = (end - start);

      while (usedRooms.size() && usedRooms.top().first <= start)
      {
        int room = usedRooms.top().second;
        availableRooms.push(room);

        usedRooms.pop();
      }

      if (availableRooms.size())
      {
        int room = availableRooms.top();
        availableRooms.pop();

        usedRooms.push({end, room});
        countRoomUsed[room]++;
      }
      // We don't have any room available now. Pick earliest end room
      else
      {
        long long int endTime = usedRooms.top().first;
        int room = usedRooms.top().second;

        // removed item form queue
        usedRooms.pop();

        usedRooms.push({(endTime + duration), room});
        countRoomUsed[room]++;
      }
    }

    int maxValue = 0;

    // find out the most used room
    for (int room = 0; room < n; room++)
    {
      if (countRoomUsed[room] > maxValue)
      {
        maxValue = countRoomUsed[room];
        res = room;
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{0, 10}, {1, 5}, {2, 7}, {3, 4}};
  cout << obj.mostBooked(2, arr) << endl;
  return 0;
}