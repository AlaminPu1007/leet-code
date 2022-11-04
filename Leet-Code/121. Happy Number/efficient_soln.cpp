#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        int sum = 0;
        unordered_map<int, int> Map;

        while (n != 1 && Map.find(n) == Map.end()) // finding an item take O(1)
        {
            Map[n]++;
            n = getNext(n);
        }

        return n == 1;
    }

private:
    int getNext(int n)
    {
        int totalSum = 0;
        while (n)
        {
            int d = n % 10;
            n /= 10;

            totalSum += d * d;
        }
        return totalSum;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isHappy(2);
    cout << res << endl;
    return 0;
}
