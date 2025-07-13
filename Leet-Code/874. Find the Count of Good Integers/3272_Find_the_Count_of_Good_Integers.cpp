#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef long long ll;
    ll res = 0;
    unordered_set<string> st;
    vector<ll> factorials;

public:
    long long countGoodIntegers(int n, int k)
    {
        factorials = vector<ll>(11, 1);

        for (int i = 2; i <= 10; i++)
            factorials[i] = i * factorials[i - 1];

        string number(n, ' ');
        generatePalindromes(0, n, number, k);

        return res;
    }

private:
    bool isKPalindrome(string &number, int k)
    {
        return (stoll(number) % k == 0);
    }

    void generatePalindromes(int pos, int n, string &number, int k)
    {
        if (pos >= (n + 1) / 2)
        {
            if (isKPalindrome(number, k))
                res += allArrangements(number, n);
            return;
        }

        char start = (pos == 0) ? '1' : '0';

        for (char ch = start; ch <= '9'; ch++)
        {
            number[pos] = ch;
            number[n - pos - 1] = ch;
            generatePalindromes(pos + 1, n, number, k);
        }

        number[pos] = ' ';
    }

    ll allArrangements(string &number, int n)
    {
        string sortedNum = number;

        sort(sortedNum.begin(), sortedNum.end());

        if (st.count(sortedNum))
            return 0;

        st.insert(sortedNum);

        vector<int> freq(10, 0);
        for (char ch : number)
            freq[ch - '0']++;

        ll totalPermutations = countAllPermutations(freq, n);
        ll invalidPermutations = 0;

        if (freq[0] > 0)
        {
            freq[0]--;
            invalidPermutations = countAllPermutations(freq, n - 1);
        }

        return totalPermutations - invalidPermutations;
    }

    ll countAllPermutations(vector<int> &freq, int n)
    {
        ll count = factorials[n];

        for (int i = 0; i <= 9; i++)
            count /= factorials[freq[i]];

        return count;
    }
};

int main(void)
{
    Solution obj;
    int n = 3, k = 5;
    cout << obj.countGoodIntegers(n, k) << endl;
    return 0;
}
