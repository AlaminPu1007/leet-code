#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        int potionsSize = potions.size();
        int spellsSize = spells.size();
        vector<int> res;

        // sort array to perform binary search of it
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spellsSize; i++)
        {
            int left = 0, right = potionsSize - 1;
            // put potionsSize to avoid if any element is not found then output should be 0
            int lastIndex = potionsSize;

            while (left <= right)
            {
                int mid = ((right + left) / 2);
                // cast into long data type to avoid sign integer overflow
                long long isValid = (long)spells[i] * potions[mid];
                if (isValid >= success)
                {
                    right = mid - 1;
                    lastIndex = mid;
                }
                else
                    left = mid + 1;
            }
            res.push_back(potionsSize - lastIndex);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> spells = {5, 1, 3}, potions = {1, 2, 3, 4, 5};

    int success = 7;

    vector<int> res = obj.successfulPairs(spells, potions, success);
    for (auto item : res)
        cout << item << " ";
    return 0;
}