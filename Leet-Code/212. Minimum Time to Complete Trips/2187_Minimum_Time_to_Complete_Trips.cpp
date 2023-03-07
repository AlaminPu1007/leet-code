2187. Minimum Time to Complete Trips #include<bits / stdc++.h> using namespace std;

class Solution
{
public:
    long long minimumTime(vector<int> &time, int totalTrips)
    {

        // The minimum possible valid time is 1 since we can't set a shorter time than this, thus we set the left boundary as left = 1
        long long left = 1;

        // For the right boundary, we can set it as the totalTrips multiplied by the maximum time required by one bus, thus this time is long enough for buses to finish totalTrips, so we set the right boundary as right = max(times) * totalTrips
        long long right = 1LL * *max_element(time.begin(), time.end()) * totalTrips;

        while (left < right)
        {
            long long mid = left + ((right - left) / 2);

            if (totalTime(mid, totalTrips, time))
            {
                right = mid;
            }
            else
                left = mid + 1;
        }
        return left;
    }

private:
    bool totalTime(long long mid, int totalTrips, vector<int> &time)
    {
        long long actualTrips = 0;
        for (auto item : time)
        {
            actualTrips += mid / item;
        }
        return actualTrips >= totalTrips;
    }
};

int main(void)
{
    Solution obj;
    vector<int> time = {1, 2, 3};
    long long res = obj.minimumTime(time, 5);
    cout << res << endl;
    return 0;
}