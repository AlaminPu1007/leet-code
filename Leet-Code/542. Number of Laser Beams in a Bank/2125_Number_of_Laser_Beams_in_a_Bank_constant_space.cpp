#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int res = 0, prv = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < bank[i].size(); j++)
            {
                if (bank[i][j] == '1')
                    count++;
            }

            if (count)
            {
                res += (count * prv);
                prv = count;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"011001", "000000", "010100", "001000"};
    cout << obj.numberOfBeams(arr) << endl;
    return 0;
}