#include <bits/stdc++.h>
using namespace std;

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

// we should removed this before submission
class MountainArray
{
public:
    int get(int index);
    int length();
};

class Solution
{
public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int len = mountainArr.length();

        // found out the actual mid
        int m = 0;

        int l = 1, r = len - 2;

        while (l <= r)
        {
            m = l + (r - l) / 2;

            int left = mountainArr.get(m - 1), mid = mountainArr.get(m), right = mountainArr.get(m + 1);

            if ((left < mid) && (mid > right))
                // we found peak
                break;

            else if (left < mid && mid < right)
                l = m + 1;

            else if (left > mid && mid > right)
                r = m - 1;
        }

        int peak = m;

        // search for left portion
        l = 0, r = peak;

        while (l <= r)
        {
            m = l + (r - l) / 2;
            int val = mountainArr.get(m);

            if (val < target)
            {
                l = m + 1;
            }
            else if (val > target)
            {
                r = m - 1;
            }
            else
                return m;
        }

        // search for right portion
        l = peak, r = len - 1;

        while (l <= r)
        {
            m = l + (r - l) / 2;
            int val = mountainArr.get(m);

            if (val > target)
            {
                l = m + 1;
            }
            else if (val < target)
            {
                r = m - 1;
            }
            else
                return m;
        }
        return -1;
    }
};