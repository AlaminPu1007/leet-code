#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int _v)
    {
        val = _v;
        next = NULL;
        prev = NULL;
    }
};

class MyCircularQueue
{
public:
    Node *left = NULL, *right = NULL;
    int total;
    MyCircularQueue(int k)
    {
        total = k;
        left = new Node(0), right = new Node(0);
        left->next = right;
        right->prev = left;
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;

        // create a node in last of the list
        Node *cur = new Node(value);
        cur->next = right;
        cur->prev = right->prev;

        // This is node of left portion(ex: at first point, it will update left->next value)
        right->prev->next = cur;
        // update right prev
        right->prev = cur;

        total--;

        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;

        Node *temp = left->next->next;
        left->next = left->next->next;
        temp->prev = left;

        total++;
        return true;
    }

    int Front()
    {
        if (isEmpty())
            return -1;
        return left->next->val;
    }

    int Rear()
    {
        if (isEmpty())
            return -1;
        return right->prev->val;
    }

    bool isEmpty()
    {
        if (left->next == right)
            return true;
        return false;
    }

    bool isFull()
    {
        if (total == 0)
            return true;
        return false;
    }
};

int main(void)
{
    MyCircularQueue obj(3);

    obj.enQueue(1);

    return 0;
}