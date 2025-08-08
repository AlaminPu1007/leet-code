#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int res = 0;

        for (auto item : nums)
            if (isEvenNumber(item))
                res++;

        return res;
    }

private:
    bool isEvenNumber(int num)
    {
        int count = 0;

        while (num)
        {
            count++;
            num /= 10;
        }

        return (count % 2) == 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {12, 345, 2, 6, 7896};

    cout << obj.findNumbers(arr) << endl;

    return 0;
}