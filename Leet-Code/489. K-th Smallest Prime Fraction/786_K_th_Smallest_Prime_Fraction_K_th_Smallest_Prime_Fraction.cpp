#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        int n = arr.size();
        double low = arr[0] / (double)arr[n - 1], high = 1.0;

        while (low < high)
        {
            double mid = (low + high) / 2;

            vector<int> list = findPrimeFraction(arr, mid);
            int count = list[0];

            if (k < count)
            {
                high = mid;
            }
            else if (k > count)
            {
                low = mid;
            }
            else
                return {list[1], list[2]};
        }

        return {};
    }

private:
    vector<int> findPrimeFraction(vector<int> &arr, double target)
    {
        int n = arr.size();
        int numerator = arr[0], denominator = arr[n - 1];
        int i = 0;
        int count = 0;

        // this loop item will be become denominator
        for (int j = 1; j < n; j++)
        {
            // this will check for numerator
            while (i < n && arr[i] <= arr[j] * target)
                i++;

            count += i;
            if (i > 0 && arr[i - 1] * denominator > arr[j] * numerator)
            {
                denominator = arr[j];
                numerator = arr[i - 1];
            }
        }
        return {count, numerator, denominator};
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {1, 2, 3, 5};

    vector<int> res = obj.kthSmallestPrimeFraction(arr, 3);

    for (auto item : res)
        cout << item << " ";

    return 0;
}