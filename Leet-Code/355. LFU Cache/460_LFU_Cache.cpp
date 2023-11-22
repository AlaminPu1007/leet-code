#include <bits/stdc++.h>
using namespace std;

// initialized node of linked-list
class Node
{
public:
    int value;
    int key;
    int cnt;

    Node *prv;
    Node *next;
    Node(int k, int v)
    {
        key = k;
        value = v;
        cnt = 1;
    }
};

// initialized LRU dsa
class List
{
public:
    int size;
    Node *head;
    Node *tail;

    List()
    {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prv = head;
        size = 0;
    }

    void putNode(Node *node)
    {
        Node *temp = head->next;

        node->next = temp;
        node->prv = head;

        head->next = node;
        temp->prv = node;

        size++;
    }

    void removedNode(Node *node)
    {
        Node *tempNext = node->next; // copy of tail or next node
        Node *tempPrv = node->prv;   // copy of head or previous node

        tempNext->prv = tempPrv;
        tempPrv->next = tempNext;

        size--;
    }
};

// LFU cache implement goes here
class LFUCache
{
    int maxSizeCache;
    int minFreq;
    int curSize;

    // define hash-map
    map<int, List *> freqListMap;
    // it will hold  key->node
    map<int, Node *> keyNode;

public:
    LFUCache(int capacity)
    {
        maxSizeCache = capacity;
        minFreq = 0;
        curSize = 0;
    }

    int get(int key)
    {
        if (keyNode.find(key) != keyNode.end())
        {
            Node *node = keyNode[key];
            int val = node->value;
            updateFreqListMap(node);
            // keyNode.erase(key);

            return val;
        }

        return -1;
    }

    void put(int key, int value)
    {

        if (maxSizeCache == 0)
            return;

        // if key is found
        if (keyNode.find(key) != keyNode.end())
        {
            Node *node = keyNode[key];
            node->value = value;

            // update methodology goes here
            updateFreqListMap(node);
        }
        else
        {

            // before put into new list check max-size
            if (curSize == maxSizeCache)
            {
                List *listFreq = freqListMap[minFreq];
                // make a copy of less frequency last element
                Node *temp = listFreq->tail->prv;

                // erase it from key-map
                keyNode.erase(temp->key);

                // now removed it from list
                freqListMap[minFreq]->removedNode(temp);

                // new decrease current size
                curSize--;
            }

            // initialize a LRU List
            List *listFreq = new List();

            curSize++;
            minFreq = 1;

            // if minFreq list is already exists
            if (freqListMap.find(minFreq) != freqListMap.end())
            {
                // update list
                listFreq = freqListMap[minFreq];
            }

            Node *node = new Node(key, value);

            listFreq->putNode(node);
            freqListMap[minFreq] = listFreq;

            // put into key-node also
            keyNode[key] = node;
        }
    }
    void updateFreqListMap(Node *node)
    {
        // erase/removed from map
        keyNode.erase(node->key);
        freqListMap[node->cnt]->removedNode(node); 

        // update minFrq value
        if (node->cnt == minFreq && freqListMap[minFreq]->size == 0)
            minFreq++;

        // initialized new list
        List *listFreq = new List();
        node->cnt++;

        // if new frequency is already exists, then update listFreq
        if (freqListMap.find(node->cnt) != freqListMap.end())
            listFreq = freqListMap[node->cnt];

        listFreq->putNode(node);

        freqListMap[node->cnt] = listFreq;

        // put into key-map
        keyNode[node->key] = node;
    }
};