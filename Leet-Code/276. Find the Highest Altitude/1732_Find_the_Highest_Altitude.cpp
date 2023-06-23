#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int len = gain.size();
        int currentAltitude = 0, heightAltitude = 0;

        for (auto item : gain)
        {
            currentAltitude += item;
            heightAltitude = max(heightAltitude, currentAltitude);
        }
        return heightAltitude;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-5, 1, 5, 0, -7};
    cout << obj.largestAltitude(arr) << endl;
    return 0;
}