#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int res = 0, x = 0;

        vector<int> noOfOnes(n);

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < bank[i].size(); j++)
            {
                if (bank[i][j] == '1')
                    count++;
            }
            if (count)
                noOfOnes[x++] = count;
        }

        for (int i = 1; i < noOfOnes.size(); i++)
            res += (noOfOnes[i - 1] * noOfOnes[i]);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"000", "111", "000"};
    cout << obj.numberOfBeams(arr) << endl;
    return 0;
}