#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> res(n), freq(n + 1, 0);

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (++freq[A[i]] == 2)
                count++;

            if (++freq[B[i]] == 2)
                count++;

            res[i] = count;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> A = {1, 3, 2, 4}, B = {3, 1, 2, 4};

    vector<int> res = obj.findThePrefixCommonArray(A, B);

    for (auto item : res)
        cout << item << " ";

    return 0;
}