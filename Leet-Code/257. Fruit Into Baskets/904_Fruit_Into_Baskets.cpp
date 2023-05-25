#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int res = 0, total = 0, left = 0, len = fruits.size();
        unordered_map<int, int> Map;

        for (int right = 0; right < len; right++)
        {
            // put every element into hash-map
            Map[fruits[right]]++;
            total++;

            // if hash-table size is larger than 2, removed it's from hash-map
            while (Map.size() > 2)
            {
                // decrement it's frequency  from hash-map
                Map[fruits[left]]--;
                total--;

                if (Map[fruits[left]] == 0)
                    Map.erase(fruits[left]);

                left++;
            }

            res = max(res, total);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 2, 2};
    cout << obj.totalFruit(arr) << endl;
    return 0;
}