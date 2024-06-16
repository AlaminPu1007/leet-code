#include <bits/stdc++.h>
using namespace std;

class UNION
{
    vector<int> parents, size;
    int numOfComponents;

public:
    UNION(int n)
    {
        parents.resize(n + 1);
        size.resize(n + 1);
        numOfComponents = n;

        // initialize parent's
        for (int i = 0; i <= n; i++)
        {
            parents[i] = i;
            size[i] = 1;
        }
    }

    // this method help us to find ultimate(root parent) of given node
    int findParent(int node)
    {
        if (node == parents[node])
            return node;

        else
            return parents[node] = findParent(parents[node]);
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] < size[ulp_v])
        {
            parents[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parents[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        numOfComponents--;
    }
    int countComponent()
    {
        return numOfComponents;
    }
};

class Solution
{
public:
    bool canTraverseAllPairs(vector<int> &nums)
    {
        int n = nums.size();

        // define union by size object
        UNION obj(n);

        // store prime factor of each element of given array
        unordered_map<int, int> Map;

        for (int i = 0; i < n; i++)
        {
            // find each element prime factor
            for (int factor = 2; factor <= sqrt(nums[i]); factor++)
            {
                if (nums[i] % factor != 0)
                    continue;

                if (Map.find(factor) != Map.end())
                {
                    obj.unionBySize(Map[factor], i);
                }
                else
                {
                    Map[factor] = i;
                }

                // update nums[i]
                while (nums[i] % factor == 0)
                    nums[i] /= factor;
            }

            if (nums[i] > 1)
            {
                if (Map.find(nums[i]) != Map.end())
                {
                    obj.unionBySize(Map[nums[i]], i);
                }
                else
                {
                    Map[nums[i]] = i;
                }
            }
        }
        return obj.countComponent() == 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {2, 3, 6};
    cout << obj.canTraverseAllPairs(nums) << endl;

    return 0;
}