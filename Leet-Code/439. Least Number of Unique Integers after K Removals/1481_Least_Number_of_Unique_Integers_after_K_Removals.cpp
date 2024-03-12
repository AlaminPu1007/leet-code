#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> freq;

        priority_queue<int, vector<int>, greater<int>> pq;

        // count each element frequency or presence in array
        for (auto item : arr)
        {
            freq[item]++;
        }

        for (auto item : freq)
            pq.push(item.second);

        int elementRemoved = 0;

        while (pq.size())
        {
            elementRemoved += pq.top();

            if (elementRemoved > k)
                return pq.size();

            pq.pop();
        }

        return 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 5, 4};
    cout << obj.findLeastNumOfUniqueInts(arr, 1) << endl;
    return 0;
}