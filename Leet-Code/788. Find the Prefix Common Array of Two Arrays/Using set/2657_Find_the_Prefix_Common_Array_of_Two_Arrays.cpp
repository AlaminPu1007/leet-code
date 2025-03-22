#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> res;

        unordered_set<int> st1, st2;

        for (int i = 0; i < n; i++)
        {
            // store current item into set
            st1.insert(A[i]);
            st2.insert(B[i]);

            int count = 0;
            // iterate over the any of the set, and find common
            for (auto item : st1)
            {
                if (st2.count(item))
                    count++;
            }

            // hold as a result
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