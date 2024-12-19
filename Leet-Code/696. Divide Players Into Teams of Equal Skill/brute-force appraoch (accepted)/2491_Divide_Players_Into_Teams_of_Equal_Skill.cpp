#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        long long res = 0;
        int n = skill.size();
        int total = 0;
        for (auto item : skill)
            total += item;

        if (total % (n / 2))
            return -1;

        int target = (total / (n / 2));

        sort(skill.begin(), skill.end());

        for (int i = 0; i < n / 2; i++)
        {
            if ((skill[i] + skill[n - 1 - i]) != target)
                return -1;
            res += (skill[i] * skill[n - 1 - i]);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 5, 1, 3, 4};
    cout << obj.dividePlayers(arr) << endl;
    return 0;
}