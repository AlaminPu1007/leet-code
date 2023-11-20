#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    int val;
    Node *next;
    Node *prv;

    Node(int _key, int _val)
    {
        key = _key;
        val = _val;
    }
};

class LRUCache
{
    int maxValue = 0;
    unordered_map<int, Node *> Map;

public:
    // initialized with -1
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);

    void putNewNode(Node *node)
    {
        Node *temp = head->next;

        node->next = temp;
        node->prv = head;

        head->next = node;
        temp->prv = node;
    }

    void deleteNode(Node *node)
    {
        Node *tempNext = node->next; // copy of tail or next node
        Node *tempPrv = node->prv;   // copy of head or previous node

        tempNext->prv = tempPrv;
        tempPrv->next = tempNext;
    }

public:
    LRUCache(int capacity)
    {
        maxValue = capacity;

        head->next = tail;
        head->prv = NULL;

        tail->prv = head;
        tail->next = NULL;
    }

    int get(int key)
    {
        if (Map.find(key) != Map.end())
        {
            Node *node = Map[key];
            int res = node->val;

            // removed from hash-table
            Map.erase(key);

            // delete from doubly linked-list
            deleteNode(node);

            // put node into list
            //  putNewNode(new Node(key, node->val));
            putNewNode(node);
            Map[key] = head->next;

            return res;
        }

        return -1;
    }

    void put(int key, int value)
    {
        // if item is found in hash-map
        if (Map.find(key) != Map.end())
        {
            // delete from doubly linked-list
            deleteNode(Map[key]);

            // removed from hash-table
            Map.erase(key);
        }

        // insert item into map
        if (maxValue == Map.size())
        {
            Map.erase(tail->prv->key);
            // delete also
            deleteNode(tail->prv);
        }

        // add new node
        putNewNode(new Node(key, value));
        Map[key] = head->next;
    }
};