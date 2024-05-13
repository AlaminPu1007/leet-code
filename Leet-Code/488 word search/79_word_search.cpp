#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool exist(vector<vector<char>> &board, string word)
  {
    int n = board.size(), m = board[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (DFS(i, j, 0, word, board, visited, n, m))
          return true;
      }
    }

    return false;
  }

private:
  bool DFS(int row, int col, int i, string word, vector<vector<char>> &board, vector<vector<bool>> &visited, int n, int m)
  {

    // initialize base case
    if (i == word.size())
      return true;

    // if we haven't reached the end of the word and we are out of bounds
    // or visited or the character is not equal to the word
    if (row < 0 || col < 0 || row >= n || col >= m || visited[row][col] || board[row][col] != word[i])
      return false;

    // mark as visited and move on to next character
    visited[row][col] = true;

    // if any of them is true
    bool res = (DFS(row + 1, col, i + 1, word, board, visited, n, m) ||
                DFS(row - 1, col, i + 1, word, board, visited, n, m) ||
                DFS(row, col + 1, i + 1, word, board, visited, n, m) ||
                DFS(row, col - 1, i + 1, word, board, visited, n, m));

    // backtrack by setting it to false
    visited[row][col] = false;
    return res;
  }
};

int main(void)
{
  Solution obj;

  //"C","A","A"],["A","A","A"],["B","C","D"
  // AAB
  // vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  vector<vector<char>> board = {{'C', 'A', 'A'}, {'A', 'A', 'A'}, {'B', 'C', 'D'}};
  // string word = "ABCCED";
  string word = "AAB";
  cout << obj.exist(board, word) << endl;
  return 0;
}
