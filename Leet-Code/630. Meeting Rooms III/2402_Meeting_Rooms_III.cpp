#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int mostBooked(int n, vector<vector<int>> &meetings)
  {
    int m = meetings.size();
    int res = -1;

    // sort the meetings array
    sort(meetings.begin(), meetings.end());

    // initialize a vector to store meeting end hours with their room
    vector<long long> meetingEndAt(n, 0);

    // initialize a vector to keep track of count each no of room used frequency
    vector<int> countRoomUsed(n, 0);

    for (auto item : meetings)
    {
      int start = item[0];
      int end = item[1];
      int duration = end - start;

      bool isMeetingRoomFound = false;

      long long lowestMeetingHours = LLONG_MAX;
      int roomNoOfLowestHours = -1;

      // give each room with their appropriate meeting end time or hours
      for (int room = 0; room < n; room++)
      {
        // give each meeting with it's available room
        if (meetingEndAt[room] <= start)
        {
          meetingEndAt[room] = end;
          countRoomUsed[room]++;

          isMeetingRoomFound = true;
          break;
        }

        // if no meeting room is found, then need to keep track the lowest meeting end hours
        if (meetingEndAt[room] < lowestMeetingHours)
        {
          lowestMeetingHours = meetingEndAt[room];
          roomNoOfLowestHours = room;
        }
      }

      // do stuff if no room is found for the current meeting
      if (!isMeetingRoomFound)
      {
        meetingEndAt[roomNoOfLowestHours] += duration;
        countRoomUsed[roomNoOfLowestHours]++;
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