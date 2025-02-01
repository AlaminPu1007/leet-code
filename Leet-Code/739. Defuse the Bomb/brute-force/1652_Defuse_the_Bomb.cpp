#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        int n = code.size();
        vector<int> res(n, 0);

        if (k == 0)
            return res;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            if (k > 0)
            {
                for (int j = i + 1; j < i + 1 + k; j++)
                    sum += code[j % n];
            }
            else
            {
                for (int j = i - abs(k); j < i; j++)
                    sum += code[(j + n) % n];
            }

            res[i] = sum;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 4, 9, 3};
    vector<int> res = obj.decrypt(arr, -2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}