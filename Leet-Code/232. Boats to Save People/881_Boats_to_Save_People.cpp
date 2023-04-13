#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int ans = 0;
        int left = 0, right = people.size() - 1;
        // sort array
        sort(people.begin(), people.end());

        while (left <= right)
        {
            ans++;
            if (people[left] + people[right] <= limit)
                left++;
            right--;
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> people = {3, 5, 3, 4};
    int limit = 5;

    int res = obj.numRescueBoats(people, limit);
    cout << res << endl;
    return 0;
}