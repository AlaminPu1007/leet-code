#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef long long ll;
    vector<ll> segmentTree;

public:
    long long goodTriplets(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        segmentTree = vector<ll>(4 * n + 1, 0);
        unordered_map<ll, ll> Map;

        // map each nums2 item within it's index
        for (ll i = 0; i < n; i++)
            Map[nums2[i]] = i;

        ll res = 0;

        updateSegmentTree(1, 0, n - 1, Map[nums1[0]]);

        for (int i = 1; i < n - 1; i++)
        {
            ll commonTotalLeftElement = rangeSumQuery(1, 0, n - 1, 0, Map[nums1[i]]);
            ll unCommonTotalLeftElement = (i - commonTotalLeftElement);
            ll commonRightElements = (n - Map[nums1[i]] - 1) - unCommonTotalLeftElement;

            res += commonTotalLeftElement * commonRightElements;

            // update segment tree
            updateSegmentTree(1, 0, n - 1, Map[nums1[i]]);
        }

        return res;
    }

private:
    void updateSegmentTree(ll startIdx, ll start, ll end, ll &queryIdx)
    {
        if (end < queryIdx || start > queryIdx)
            return;

        if (start == end)
        {
            segmentTree[startIdx]++;
            return;
        }

        ll mid = (start + end) / 2;

        updateSegmentTree(2 * startIdx, start, mid, queryIdx);
        updateSegmentTree(2 * startIdx + 1, mid + 1, end, queryIdx);

        segmentTree[startIdx] = segmentTree[2 * startIdx] + segmentTree[2 * startIdx + 1];
    }

private:
    ll rangeSumQuery(ll stIdx, ll start, ll end, ll qs, ll qe)
    {
        // if no overlap is happened
        if (qs > end || qe < start)
            return 0;

        // if total overlap is happened
        if (start >= qs && end <= qe)
            return segmentTree[stIdx];

        ll mid = (start + end) / 2;

        ll leftSum = rangeSumQuery(2 * stIdx, start, mid, qs, qe);
        ll rightSum = rangeSumQuery(2 * stIdx + 1, mid + 1, end, qs, qe);

        return leftSum + rightSum;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {2, 0, 1, 3}, nums2 = {0, 1, 2, 3};

    cout << obj.goodTriplets(nums1, nums2) << endl;

    return 0;
}