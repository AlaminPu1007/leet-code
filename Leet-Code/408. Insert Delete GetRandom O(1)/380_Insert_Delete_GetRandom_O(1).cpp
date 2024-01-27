#include <bits/stdc++.h>
using namespace std;

class RandomizedSet
{
private:
    unordered_map<int, int> Map;
    vector<int> values;

public:
    RandomizedSet()
    {
    }
    bool searchItem(int v)
    {
        if (Map.find(v) != Map.end())
            return true;

        return false;
    }

    bool insert(int val)
    {
        if (searchItem(val))
            return false;

        // store value with it's index
        Map[val] = values.size();

        // store into array
        values.push_back(val);

        return true;
    }

    bool remove(int val)
    {
        if (!searchItem(val))
            return false;

        // get copy of the last element from array
        int temp = values.back();

        // update temp index into hash-map
        Map[temp] = Map[val];

        values[Map[val]] = temp;

        values.pop_back();
        Map.erase(val);

        return true;
    }

    int getRandom()
    {
        return values[rand() % values.size()];
    }
};