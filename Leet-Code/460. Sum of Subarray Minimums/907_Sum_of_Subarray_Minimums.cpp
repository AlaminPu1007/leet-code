#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int sum = 0, n = arr.size();

        vector<int> NSL = getNSL(arr, n);
        vector<int> NSR = getNSR(arr, n);

        for (int i = 0; i < n; i++)
        {
            long long ls = (i - NSL[i]);
            long long rs = (NSR[i] - i);

            long long int totalSubArray = (ls * rs);
            long long int totalSum = arr[i] * totalSubArray;

            sum = (sum + totalSum) % MOD;
        }

        return sum;
    }

private:
    vector<int> getNSL(vector<int> &arr, int n)
    {
        stack<int> st;
        vector<int> NSL(n);

        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                NSL[i] = -1;
            else
            {
                // to avoid duplicate issue
                while (!st.empty() && arr[i] <= arr[st.top()])
                    st.pop();

                NSL[i] = st.empty() ? -1 : st.top();
            }
            st.push(i);
        }

        return NSL;
    }

    vector<int> getNSR(vector<int> &arr, int n)
    {
        stack<int> st;
        vector<int> NSR(n);

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.empty())
                NSR[i] = n;
            else
            {
                while (!st.empty() && arr[i] < arr[st.top()])
                    st.pop();

                NSR[i] = st.empty() ? n : st.top();
            }
            st.push(i);
        }

        return NSR;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {71, 55, 82, 55};
    cout << obj.sumSubarrayMins(arr) << endl;
    return 0;
}