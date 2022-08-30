
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;
        map<char, int> Map;

        int len = jewels.size(), len2 = stones.size();

        for (int i = 0; i < len2; i++)
            Map[stones[i]]++;

        for (int i = 0; i < len; i++)
            count += Map[jewels[i]];

        return count;
    }
};

int main(void)
{
    Solution obj;
    string jewels = "aA", stones = "aAAbbbb";
    obj.numJewelsInStones(jewels, stones);
    return 0;
}