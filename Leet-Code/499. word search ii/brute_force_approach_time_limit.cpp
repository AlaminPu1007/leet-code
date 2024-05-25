#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
  {
    int n = board.size(), m = board[0].size();
    set<string> res;

    for (auto item : words)
    {
      vector<vector<bool>> visited(n, vector<bool>(m, false));
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          if (DFS(board, i, j, 0, item, visited))
          {
            res.insert(item);
            // Add this line to check if the word has already been found
            break;
          }
        }
      }
    }

    vector<string> ans;

    for (auto item : res)
      ans.push_back(item);

    return ans;
  }

private:
  bool DFS(vector<vector<char>> &board, int row, int col, int i, string &word, vector<vector<bool>> &visited)
  {
    if (i == word.size())
      return true;

    if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || visited[row][col] || board[row][col] != word[i])
      return false;

    visited[row][col] = true;

    bool res = (DFS(board, row + 1, col, i + 1, word, visited) ||
                DFS(board, row - 1, col, i + 1, word, visited) ||
                DFS(board, row, col + 1, i + 1, word, visited) ||
                DFS(board, row, col - 1, i + 1, word, visited));

    // Backtracking
    visited[row][col] = false;
    return res;
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