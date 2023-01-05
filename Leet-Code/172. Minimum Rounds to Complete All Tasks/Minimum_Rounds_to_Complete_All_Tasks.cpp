#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        int len = tasks.size();
        unordered_map<int, int> Map;

        // count each element frequency(Occurence of an element)
        for (int i = 0; i < len; i++)
            Map[tasks[i]]++;

        int res = 0, count = 0;

        for (auto [task, count] : Map)
        {
            // If the frequency is 1, it's not possible to complete tasks.
            if (count == 1)
            {
                return -1;
            }
            // Group all the task in triplets.
            if (count % 3 == 0)
            {
                res += count / 3;
            }
            else
            {
                // If count % 3 = 1; (count / 3 - 1) groups of triplets and 2 pairs.
                // If count % 3 = 2; (count / 3) groups of triplets and 1 pair.
                res += count / 3 + 1;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
    int res = obj.minimumRounds(arr);
    cout << res << endl;
    return 0;
}