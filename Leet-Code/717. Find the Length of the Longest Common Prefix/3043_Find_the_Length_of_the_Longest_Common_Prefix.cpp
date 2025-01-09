#include <bits/stdc++.h>
using namespace std;

// define a trie node
class Node
{
public:
  Node *links[10];
  // indicates whether the word is an ending one in Trie
  int endWord;

  Node()
  {
    endWord = 0;
    for (int i = 0; i < 10; i++)
    {
      links[i] = nullptr;
    }
  }
  // check a character is already exist or not
  bool containsKey(char ch)
  {
    return links[ch - '0'] != NULL;
  }

  //  insert a new key to the Trie
  void insert(char ch, Node *node)
  {
    links[ch - '0'] = node;
  }

  // get node address with given character
  Node *getNode(char ch)
  {
    return links[ch - '0'];
  }
};

class Trie
{
  // define root node
  Node *root;

public:
  Trie()
  {
    // initialize a new root node for this template.
    root = new Node();
  }

  void insert(int num)
  {
    // Write your code here.
    string word = to_string(num);
    int n = word.size();
    Node *node = root;

    for (int i = 0; i < n; i++)
    {
      // check whether the element of given word is already
      // present in the trie
      if (!node->containsKey(word[i]))
      {
        // insert new element
        node->insert(word[i], new Node());
      }
      // update node pointer with next node pointer
      node = node->getNode(word[i]);
    }
  }

  int countWordsStartingWith(string &word)
  {
    // Write your code here.
    int n = word.size();
    Node *node = root;
    int len = 0;

    for (int i = 0; i < n; i++)
    {
      if (node->containsKey(word[i]))
      {
        len++;
        node = node->getNode(word[i]);
      }
      else
        break;
    }
    return len;
  }
};

class Solution
{
public:
  int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
  {
    Trie T;
    int res = 0;
    for (auto item : arr2)
    {
      // Insert all prefixes of the number into the Trie
      string word = to_string(item);

      for (int i = 1; i <= word.size(); i++)
      {
        T.insert(item); // Insert each prefix
      }
    }

    for (auto item : arr1)
    {
      string word = to_string(item);

      int len = T.countWordsStartingWith(word);
      res = max(res, len);
    }

    return res;
  }
};

int main(void)
{
  vector<int> arr1 = {10}, arr2 = {17, 11};
  Solution obj;
  cout << obj.longestCommonPrefix(arr1, arr2);
  return 0;
}