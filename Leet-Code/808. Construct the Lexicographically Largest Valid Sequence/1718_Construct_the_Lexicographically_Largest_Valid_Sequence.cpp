#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> constructDistancedSequence(int n)
    {
        vector<int> res(2 * n - 1, 0);
        set<int> visit;

        Solve(0, res, n, visit);

        return res;
    }

private:
    bool Solve(int i, vector<int> &res, int n, set<int> &visit)
    {
        // handle base case
        if (i == res.size())
            return true;

        if (i > res.size())
            return false;

        for (int num = n; num >= 1; num--)
        {
            // if this number is already visited
            if (visit.find(num) != visit.end())
                continue;

            // if the specific index are already inserted a number
            // then skip this also
            if (num > 1 && (i + num >= res.size() || (res[i + num] != 0)))
                continue;

            // mark as visited
            visit.insert(num);

            res[i] = num;

            if (num > 1)
                res[i + num] = num;

            // find the next slot that will be able to insert a num
            // try to insert number from (i + 1) index
            int j = i + 1;

            while (j < res.size() && res[j] != 0)
                j++;

            // recursive step
            if (Solve(j, res, n, visit))
                return true;

            // backtracking step for invalid case's

            visit.erase(num);

            res[i] = 0;
            if (num > 1)
                res[i + num] = 0;
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> res = obj.constructDistancedSequence(3);

    for (auto item : res)
        cout << item << " ";

    return 0;
}