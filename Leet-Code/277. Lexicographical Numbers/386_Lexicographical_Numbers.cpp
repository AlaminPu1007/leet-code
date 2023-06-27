#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> arr;
        Solve(arr, 0, n);
        return arr;
    }

private:
    void Solve(vector<int> &arr, int i, int n)
    {
        if (i > n)
            return;

        if (i > 0)
            arr.push_back(i);

        for (int j = 0; j <= 9; j++)
        {
            if (i == 0 && j == 0)
                continue;

            Solve(arr, i * 10 + j, n);
        }
    }
};

int main(void)
{
    Solution obj;
    int n = 30;

    vector<int> res = obj.lexicalOrder(n);
    for (auto item : res)
        cout << item << " ";
    return 0;
}