#include <bits/stdc++.h>
using namespace std;

/**
 * s1 = 0 // n = 1
 * s2 = 011 // n = 2
 * s3 = 0111001 // n = 3
 * s4 = 011100110110001 // n = 4
 */

class Solution
{
public:
    char findKthBit(int n, int k)
    {
        // Handle the base case (n = 1, first sequence is just "0")
        if (n == 1)
            return '0';

        // Calculate the length of the string at level n: length = 2^n - 1
        int len = (1 << n) - 1;

        // Find the midpoint of the current level
        int mid = (len / 2) + 1; // +1 because midpoint is 1-indexed

        // If k is in the left half, recurse on the previous level (n-1)
        if (k < mid)
        {
            return findKthBit(n - 1, k);
        }
        // If k is in the right half, recurse on the mirrored part of the previous level (n-1)
        else if (k > mid)
        {
            // Recurse on the mirrored index in the previous level
            char ch = findKthBit(n - 1, len - k + 1);
            return ch == '1' ? '0' : '1'; // Invert the bit
        }
        // If k is exactly at the midpoint, the result is always '1'
        else
        {
            return '1';
        }
    }
};

int main(void)
{
    Solution obj;
    int n = 3, k = 1;
    cout << obj.findKthBit(n, k) << endl;
    return 0;
}