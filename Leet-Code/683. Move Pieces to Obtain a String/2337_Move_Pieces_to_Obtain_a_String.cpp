#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canChange(string start, string target)
    {
        int n = start.size(), m = target.size(), first = 0, second = 0;

        if (n != m)
            return false;

        while (first < n || second < m)
        {

            // skip start string _ as much as possible
            while (first < n && start[first] == '_')
                first++;

            // skip second string _ as much as possible
            while (second < m && target[second] == '_')
                second++;

            // target and start has not similar directions
            if (start[first] != target[second])
                return false;

            // it's possible to one of them or both of them reach to the end
            if (first == n || second == m)
                return first == n && second == m;

            if ((start[first] == 'L' && first < second) || (start[first] == 'R' && first > second))
                return false;

            // move from current characters after skip all '_'
            first++;
            second++;
        }
        return true;
    }
};

int main(void)
{
    Solution obj;

    string start = "_L__R__R_", target = "L______RR";
    cout << obj.canChange(start, target) << endl;

    return 0;
}