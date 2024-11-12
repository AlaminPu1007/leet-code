#include <bits/stdc++.h>
using namespace std;

// define a node of a doubly linked list
class Node
{
public:
  int freq; // the repetition of given string
  Node *next, *prv;
  unordered_set<string> keys;
  Node(int f)
  {
    freq = f;
    next = NULL;
    prv = NULL;
  }
};

class AllOne
{

  unordered_map<string, Node *> Map;
  Node *head, *tail;

public:
  AllOne()
  {
    head = new Node(0);
    tail = new Node(0);

    head->next = tail; // Link dummy head to dummy tail
    tail->prv = head;  // Link dummy tail to dummy head
  }

  void inc(string key)
  {
    // if item is already present in map
    if (Map.find(key) != Map.end())
    {
      Node *curNode = Map[key];
      int curCount = curNode->freq;
      curNode->keys.erase(key);

      /*
        we have to check two thing.
          1) if curNode->next is equal to tail
          2) if there is no such node exists. ex: curNode->freq + 1
      */
      Node *nextNode = curNode->next;

      if (nextNode == tail || nextNode->freq != curCount + 1)
      {
        Node *newNode = new Node(curCount + 1);
        newNode->keys.insert(key);
        newNode->next = nextNode;
        newNode->prv = curNode;
        curNode->next = newNode;
        nextNode->prv = newNode;
        Map[key] = newNode;
      }
      else
      {
        // Increment the existing next node
        nextNode->keys.insert(key);
        Map[key] = nextNode;
      }

      // Remove the current node if it has no keys left
      if (curNode->keys.empty())
      {
        removeNode(curNode);
      }
    }

    // this is first time we have seen this string
    else
    {
      Node *firstNode = head->next;

      /*
        before put into node, check tow thing
        1) this is first time for creation of the node (head->next == tail)
        2) There is no node for frequency 2 (head->next->freq == 1)
      */
      if (firstNode == tail || head->next->freq != 1)
      {
        Node *newNode = new Node(1);
        newNode->keys.insert(key);
        newNode->prv = head;
        newNode->next = firstNode;
        head->next = newNode;
        firstNode->prv = newNode;
        Map[key] = newNode;
      }
      else
      {
        firstNode->keys.insert(key);
        Map[key] = firstNode;
      }
    }
  }

  void dec(string key)
  {

    if (Map.find(key) == Map.end())
    {
      return; // Key does not exist
    }

    // get current node
    Node *curNode = Map[key];
    int curCount = curNode->freq;
    curNode->keys.erase(key);

    // if it's has only one frequency, we need to removed it from map
    if (curCount == 1)
    {
      Map.erase(key);
    }
    /**
     * before removed key, we need to keep track some point
     * 1) if we decrement it's existing frequency, then we need to link up with that frequency
     * 2) it could be possible is that, the existing frequency is not present in doubly linked list, then we need to insert that one
     */
    else
    {
      Node *prevNode = curNode->prv;

      // insert new node
      if (prevNode->freq != curCount - 1 || prevNode == head)
      {
        Node *newNode = new Node(curCount - 1);
        newNode->keys.insert(key);
        newNode->next = curNode;
        newNode->prv = prevNode;
        prevNode->next = newNode;
        curNode->prv = newNode;
        Map[key] = newNode;
      }
      else
      {
        // Decrement the existing previous node
        prevNode->keys.insert(key);
        Map[key] = prevNode;
      }
    }
    if (curNode->keys.empty())
    {
      removeNode(curNode);
    }
  }

  string getMaxKey()
  {

    if (tail->prv == head)
      return "";

    return *(tail->prv->keys.begin());
  }

  string getMinKey()
  {

    if (head->next == tail)
      return "";

    return *(head->next->keys.begin());
  }

  void removeNode(Node *node)
  {
    Node *prvNode = node->prv;
    Node *nextNode = node->next;

    prvNode->next = nextNode;
    nextNode->prv = prvNode;

    delete node;
  }
};