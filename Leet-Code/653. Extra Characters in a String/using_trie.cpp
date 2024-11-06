#include <bits/stdc++.h>
using namespace std;

// define a trie node
class Node
{
public:
  Node *links[26];
  // indicates whether the word is an ending one in Trie
  int endWord;

  Node()
  {
    endWord = 0;
    // Initialize all links to NULL
    for (int i = 0; i < 26; i++)
    {
      links[i] = nullptr;
    }
  }

  bool containsKey(char ch)
  {
    return links[ch - 'a'] != NULL;
  }

  void insert(char ch, Node *node)
  {
    links[ch - 'a'] = node;
  }

  Node *getNode(char ch)
  {
    return links[ch - 'a'];
  }

  void countWord()
  {
    endWord++;
  }

  int getEnd()
  {
    return endWord;
  }
};

class Trie
{
  Node *root;

public:
  Trie()
  {
    root = new Node();
  }

  void insert(string &word)
  {
    int n = word.size();
    Node *node = root;

    for (int i = 0; i < n; i++)
    {
      if (!node->containsKey(word[i]))
      {
        node->insert(word[i], new Node());
      }
      node = node->getNode(word[i]);
    }
    node->countWord();
  }

  bool isWordInTrie(string &word)
  {
    int n = word.size();
    Node *node = root;

    for (int i = 0; i < n; i++)
    {
      if (node->containsKey(word[i]))
      {
        node = node->getNode(word[i]);
      }
      else
      {
        return false;
      }
    }
    return node->getEnd() > 0;
  }
};

class Solution
{
public:
  int minExtraChar(string s, vector<string> &dictionary)
  {
    Trie trie;
    for (auto &item : dictionary)
    {
      trie.insert(item);
    }

    vector<int> memo(s.size(), -1); // memoization array initialized to -1
    return solve(s, 0, trie, memo);
  }

private:
  int solve(string &s, int i, Trie &trie, vector<int> &memo)
  {
    if (i >= s.size())
      return 0;

    // If the result is already computed, return it
    if (memo[i] != -1)
      return memo[i];

    // Option 1: Consider the current character as an extra character
    int res = 1 + solve(s, i + 1, trie, memo);

    // Option 2: Try to match substrings starting from index i
    for (int j = i; j < s.size(); j++)
    {
      string temp = s.substr(i, j - i + 1);
      if (trie.isWordInTrie(temp))
      {
        res = min(res, solve(s, j + 1, trie, memo));
      }
    }

    return memo[i] = res; // Save the result in memo array
  }
};

int main(void)
{
  string s = "leetscode";
  vector<string> dictionary = {"leet", "code", "leetcode"};
  Solution obj;
  cout << obj.minExtraChar(s, dictionary) << endl;
  return 0;
}
