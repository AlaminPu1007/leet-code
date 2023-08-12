#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int right = letters.size() - 1, left = 0;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (letters[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        cout << left << " " << right << endl;

        return left == letters.size() ? letters[0] : letters[left];
    }
};

int main(void)
{
    Solution obj;
    vector<char> arr = {'c', 'f', 'j'};
    char t = 'z';
    cout << obj.nextGreatestLetter(arr, t) << endl;
    return 0;
}