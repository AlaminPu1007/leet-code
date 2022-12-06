#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        int len = s.size();
        /*
            count() returns number of occurrences of an element in a given range. Returns
            the number of elements in the range [first,last) that compare equal to val
        */
        return count(s.begin(), s.end(), letter) * 100 / len;
    }
};

int main(void)
{
    Solution obj;
    string str = "vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
    int res = obj.percentageLetter(str, 'v');
    cout << res << endl;
    return 0;
}