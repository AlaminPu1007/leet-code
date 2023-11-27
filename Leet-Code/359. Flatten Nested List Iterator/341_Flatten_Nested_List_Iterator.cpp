#include <bits/stdc++.h>
using namespace std;

class NestedIterator
{
public:
    vector<int> res;
    int curIndex = 0;

    NestedIterator(vector<NestedInteger> &nestedList)
    {
        flattenArray(nestedList);
    }
    // Returns the next integer in the flattened list
    int next()
    {
        int number = res[curIndex];
        curIndex++;

        return number;
    }
    // Checks if there are more integers in the flattened list
    bool hasNext()
    {
        return curIndex < res.size();
    }

private:
    void flattenArray(vector<NestedInteger> &nestedList)
    {
        for (int i = 0; i < nestedList.size(); i++)
        {
            if (nestedList[i].isInteger())
            {
                res.push_back(nestedList[i].getInteger());
            }
            else
            {
                flattenArray(nestedList[i].getList());
            }
        }
    }
};
