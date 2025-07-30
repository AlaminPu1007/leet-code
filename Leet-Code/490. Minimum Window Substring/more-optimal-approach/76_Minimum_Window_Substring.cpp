#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        int n = s.size(), left = 0;
        int end = INT_MAX, start = -1;

        unordered_map<char, int> Map;

        // get all item frequency form give t
        for (auto item : t)
            Map[item]++;

        // keep track, size of the needed item from map
        int count = Map.size();

        for (int right = 0; right < n; right++)
        {
            char currentItem = s[right];

            // if current item is being present inside map
            if (Map.find(currentItem) != Map.end())
            {
                // decrement it's frequency from the map
                Map[currentItem]--;

                // also decrement unique/needed item frequency
                if (Map[currentItem] == 0)
                    count--;
            }

            while (count == 0)
            {
                // keep track as a result of valid window
                if (right - left + 1 < end)
                {
                    end = right - left + 1; // store ending point of the valid window

                    // store start point of the valid window
                    start = left;
                }

                char previousItem = s[left];

                // if shrink or left item is already in map then increment
                // it's count. ex: Map['A'] = -2. then we can possibly get minimum window after
                // removing extra item's.
                if (Map.find(previousItem) != Map.end())
                {
                    Map[previousItem]++;

                    // increment the unique character frequency
                    if (Map[previousItem] == 1)
                        count++;
                }

                left++;
            }
        }

        // if we do not get any valid window
        if (end == INT_MAX)
            return "";

        return s.substr(start, end);
    }
};

int main(void)
{
    Solution obj;
    string s = "ADOBECODEBANC", t = "ABC";
    cout << obj.minWindow(s, t) << endl;

    return 0;
}