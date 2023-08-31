#include <bits/stdc++.h>
using namespace std;

class MyStack
{
    queue<int> q1;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        queue<int> q2;
        q2.push(x);

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int pop()
    {
        int popValue = q1.front();
        q1.pop();
        return popValue;
    }

    int top()
    {
        int topValue = q1.front();
        return topValue;
    }

    bool empty()
    {
        return q1.empty();
    }

    void print()
    {
        while (!q1.empty())
        {
            cout << q1.front() << " ";
            q1.pop();
        }
    }
};

int main(void)
{
    MyStack obj;
    obj.push(4);
    obj.push(2);
    obj.push(3);

    obj.print();
    return 0;
}