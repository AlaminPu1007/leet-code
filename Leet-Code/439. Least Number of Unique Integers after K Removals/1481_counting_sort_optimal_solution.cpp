#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> freq;

        vector<int> countingOfFrequencies(n + 1, 0);

        // count each element frequency or presence in array
        for (auto item : arr)
        {
            freq[item]++;
        }

        for (auto item : freq)
            countingOfFrequencies[item.second]++;

        int res = freq.size();

        for (int i = 1; i < countingOfFrequencies.size(); i++)
        {
            if (k >= (i * countingOfFrequencies[i]))
            {
                k -= (i * countingOfFrequencies[i]);
                res -= countingOfFrequencies[i];
            }
            else
            {
                res -= (k / i); // ex: k = 10, i = 7
                break;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 1, 3, 3, 3};
    cout << obj.findLeastNumOfUniqueInts(arr, 3) << endl;
    return 0;
}