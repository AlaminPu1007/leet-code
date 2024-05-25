#include <bits/stdc++.h>
using namespace std;

// define a trie node
class Node
{
public:
  Node *links[26];
  bool flag = false;

  bool containsKey(char ch)
  {
    return (links[ch - 'a'] != NULL);
  }

  // insert into trie node
  void insertItem(char c, Node *node)
  {
    links[c - 'a'] = node;
  }
  // return the next node reference or memory address
  Node *getItem(char c)
  {
    return links[c - 'a'];
  }

  void setEnd(bool value)
  {
    flag = value;
  }

  // this method will identify the end of the given word
  bool isEnd()
  {
    return flag;
  }
};

// define a trie class
class Trie
{
public:
  Node *root;
  Trie()
  {
    root = new Node();
  }
  // insert into trie
  void setWordIntoTrie(string word)
  {
    // make a reference of root node
    Node *node = root;

    for (int i = 0; i < word.size(); i++)
    {
      if (!node->containsKey(word[i]))
      {
        node->insertItem(word[i], new Node());
      }
      // move to reference trie
      node = node->getItem(word[i]);
    }
    // finally mark last node flag as a true
    node->setEnd(true);
  }
};

class Solution
{
public:
  vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
  {
    int n = board.size(), m = board[0].size();
    vector<string> ans;

    // initialize the trie data structure
    Trie trie;

    for (auto item : words)
    {
      // create a trie using the given words
      trie.setWordIntoTrie(item);
    }

    // Initialize the visited matrix
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Iterate through each cell on the board
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        // Call DFS for each cell
        DFS(board, i, j, trie.root, ans, "", visited);
      }
    }

    return ans;
  }

private:
  bool DFS(vector<vector<char>> &board, int row, int col, Node *node, vector<string> &ans, string path, vector<vector<bool>> &visited)
  {

    if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || visited[row][col] || !node->containsKey(board[row][col]))
      return false;

    char currChar = board[row][col];

    // Move to the next node in the trie
    node = node->getItem(currChar);

    // Append the current character to the path
    path += currChar;

    // If the current path forms a word in the trie, add it to the result
    if (node->isEnd())
    {
      ans.push_back(path);

      // Mark the end of word as false to avoid duplicate words
      node->setEnd(false);
    }

    // Mark the current cell as visited
    visited[row][col] = true;

    // Explore all four directions
    DFS(board, row + 1, col, node, ans, path, visited);
    DFS(board, row - 1, col, node, ans, path, visited);
    DFS(board, row, col + 1, node, ans, path, visited);
    DFS(board, row, col - 1, node, ans, path, visited);

    // Backtrack: Mark the current cell as unvisited and remove the last character from the path
    visited[row][col] = false;
    path.pop_back();

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<char>> board = {
      {'o', 'a', 'b', 'n'},
      {'o', 't', 'a', 'e'},
      {'a', 'h', 'k', 'r'},
      {'a', 'f', 'l', 'v'}};
  vector<string> words = {"oa", "oaa"};
  // Output : { 'eat', 'oath' }
  vector<string> res = obj.findWords(board, words);
  for (auto item : res)
    cout << item << " ";
  return 0;
}