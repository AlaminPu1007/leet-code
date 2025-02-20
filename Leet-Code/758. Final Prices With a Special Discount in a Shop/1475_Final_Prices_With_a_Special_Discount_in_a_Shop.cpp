/**
 * The idea behind of this approach is that, each element present in the stack must be in increasing order of value.
 * This is called a monotonic stack.
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> res(prices.begin(), prices.end());
        stack<int> st;

        for (int i = 0; i < n; i++)
        {

            while (st.size() && prices[st.top()] >= prices[i])
            {
                int j = st.top();
                st.pop();

                res[j] -= prices[i];
            }

            st.push(i);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {8, 4, 6, 2, 3};

    vector<int> res = obj.finalPrices(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}