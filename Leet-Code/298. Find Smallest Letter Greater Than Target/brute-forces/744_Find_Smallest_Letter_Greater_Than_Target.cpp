#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int len = letters.size();

        for (int i = 0; i < len; i++)
        {
            if (letters[i] > target)
                return letters[i];
        }

        return letters[0];
    }
};

int main(void)
{
    Solution obj;
    vector<char> arr = {'c', 'f', 'j'};
    char t = 'c';
    cout << obj.nextGreatestLetter(arr, t) << endl;
    return 0;
}