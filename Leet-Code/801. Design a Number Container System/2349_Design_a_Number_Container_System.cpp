#include <bits/stdc++.h>
using namespace std;

class NumberContainers
{
    unordered_map<int, int> noToIndex;
    unordered_map<int, set<int>> indexGroup;

public:
    NumberContainers()
    {
    }

    void change(int index, int number)
    {
        if (noToIndex.count(index))
        {
            int prevNum = noToIndex[index];
            indexGroup[prevNum].erase(index); // O(log(n))

            if (indexGroup[prevNum].empty())
                indexGroup.erase(prevNum);
        }

        noToIndex[index] = number;
        indexGroup[number].insert(index); // O(log(n))
    }

    int find(int number)
    {
        if (indexGroup.count(number))
            return *indexGroup[number].begin();

        return -1;
    }
};

int main(void)
{
    NumberContainers obj;

    return 0;
}