#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int M = 1e9 + 7;

    int numberOfWays(string corridor)
    {
        int n = corridor.size();
        long long int res = 1;
        vector<int> positionOfElement;

        for (int i = 0; i < n; i++)
            if (corridor[i] == 'S')
                positionOfElement.push_back(i);

        if (positionOfElement.size() == 0 || positionOfElement.size() % 2 == 1)
        {
            return 0;
        }

        int prevIndex = 1;
        for (int i = 2; i < positionOfElement.size(); i += 2)
        {
            res = (res * (positionOfElement[i] - positionOfElement[prevIndex])) % M;
            prevIndex = i + 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "SSPPSPSSSPPSPS";
    cout << obj.numberOfWays(str) << endl;
    return 0;
}