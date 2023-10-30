#include <bits/stdc++.h>
using namespace std;

class MyHashMap
{
public:
    int data[1000001];
    MyHashMap()
    {
        fill(data, data + 1000000, -1);
    }
    void put(int key, int value)
    {
        data[key] = value;
    }

    int get(int key)
    {
        return data[key];
    }

    void remove(int key)
    {
        data[key] = -1;
    }
};

int main(void)
{
    MyHashMap obj;
    obj.put(1, 1);
    obj.get(1);
    obj.remove(1);
    return 0;
}