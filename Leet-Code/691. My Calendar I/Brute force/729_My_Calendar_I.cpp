#include <bits/stdc++.h>
using namespace std;

class MyCalendar
{
public:
  vector<vector<int>> events;
  MyCalendar()
  {
  }

  bool book(int start, int end)
  {
    if (events.empty())
    {
      events.push_back({start, end});
      return true;
    }

    for (auto item : events)
    {
      int s = item[0], e = item[1];

      if (start < e && s < end)
      {
        return false;
      }
    }
    events.push_back({start, end});
    return true;
  }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

int main(void)
{
  MyCalendar obj;
  return 0;
}