#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> res;

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j <= i; j++)
            {
                for (int k = 0; k <= i; k++)
                {
                    if (A[j] == B[k])
                    {
                        count++;
                        break;
                    }
                }
            }
            res.push_back(count);
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