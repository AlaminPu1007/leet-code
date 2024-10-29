// Accepted Solution
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  Node *links[26];
  int countPrefix = 0;
  Node()
  {
    for (int i = 0; i < 26; i++)
      links[i] = nullptr;
    countPrefix = 0;
  }

  int convertCharToInt(char ch)
  {
    return ch - 'a';
  }

  // get next node references
  Node *getNode(char ch)
  {
    return links[convertCharToInt(ch)];
  }

  bool containsKey(char ch)
  {
    return links[convertCharToInt(ch)] != nullptr;
  }

  void insert(char ch, Node *node)
  {
    links[convertCharToInt(ch)] = node;
  }

  // update character prefix
  void increasePrefix()
  {
    countPrefix++;
  }
};

// define a Trie data-structure
class Trie
{
public:
  Node *root;
  Trie()
  {
    root = new Node();
  }

  void insertIntoTrie(string &word)
  {
    // Write your code here.
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

      // update element prefix count
      node->increasePrefix();
    }
  }

  int countPrefixWords(string word)
  {
    // Write your code here.
    int n = word.size();
    Node *node = root;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      if (node->containsKey(word[i]))
      {
        node = node->getNode(word[i]);
        ans += node->countPrefix;
      }
      else
        break;
    }
    return ans;
  }
};

class Solution
{
public:
  vector<int> sumPrefixScores(vector<string> &words)
  {
    vector<int> res;

    Trie T;
    for (auto item : words)
    {
      T.insertIntoTrie(item);
    }

    for (auto item : words)
    {
      res.push_back(T.countPrefixWords(item));
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<string> arr = {"abc", "ab", "bc", "b"};
  vector<int> res = obj.sumPrefixScores(arr);

  for (auto item : res)
  {
    cout << item << " ";
  }
  return 0;
}