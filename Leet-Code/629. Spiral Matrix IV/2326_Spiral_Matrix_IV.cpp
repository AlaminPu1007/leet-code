#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int _v)
  {
    val = _v;
    next = NULL;
  }
};

class Solution
{
public:
  vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
  {
    vector<vector<int>> grid(m, vector<int>(n, -1));

    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int i = 0, j = 0, d = 0;

    for (; head != nullptr; head = head->next)
    {
      grid[i][j] = head->val;
      int new_i = i + directions[d][0], new_j = j + directions[d][1];

      // If we bump into an edge or an already filled cell, change the
      // direction.
      if (min(new_i, new_j) < 0 || new_i >= m || new_j >= n ||
          grid[new_i][new_j] != -1)
        d = (d + 1) % 4;

      i += directions[d][0];
      j += directions[d][1];
    }

    return grid;
  }
};

int main(void)
{
  Solution obj;
  int m = 3, n = 5;
  vector<int> arr = {3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0};
  ListNode *head = new ListNode(arr[0]);

  for (int i = 1; i < arr.size(); i++)
  {
    ListNode *temp = new ListNode(arr[i]);
    ListNode *sudoHead = head;

    while (sudoHead->next)
      sudoHead = sudoHead->next;

    sudoHead->next = temp;
  }

  vector<vector<int>> res = obj.spiralMatrix(m, n, head);

  for (auto item : res)
  {
    for (auto it : item)
      cout << it << " ";
    cout << endl;
  }

  return 0;
}