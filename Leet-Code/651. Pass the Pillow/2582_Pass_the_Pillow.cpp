#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int passThePillow(int n, int time)
    {
        // get the no of round need to do to complete the traverse
        // no of hops is :(n-1)
        int noOfRound = (time / (n - 1));

        // get the current pillow position
        int pillowPosition = (time % (n - 1));

        // cout << noOfRound << " " << pillowPosition << endl;

        // if round is event no, that means the pillow position will start from left
        // else in reverse order
        if (noOfRound % 2 == 0)
            return pillowPosition + 1;

        return n - pillowPosition;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.passThePillow(4, 5) << endl;
    return 0;
}