#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string maximumOddBinaryNumber(string s)
    {
        return countingSort(s);
    }

private:
    string countingSort(string s)
    {
        int left = 0;
        int n = s.size();
        string res = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                swap(s[left], s[i]);
                left++;
            }
        }

        swap(s[left - 1], s[n - 1]);

        return s;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.maximumOddBinaryNumber("01011") << endl;
    return 0;
}