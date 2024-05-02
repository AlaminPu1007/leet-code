#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;

        vector<int> history(m, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == '1')
                    history[j]++;

                else
                    history[j] = 0;
            }

            int area = largestRectangleArea(history);
            ans = max(ans, area);
        }

        return ans;
    }

private:
    int largestRectangleArea(vector<int> &history)
    {
        stack<int> st;
        int maxA = 0;
        int n = history.size();
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || history[st.top()] >= history[i]))
            {
                int height = history[st.top()];
                st.pop();

                int width;

                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxA = max(maxA, width * height);
            }
            st.push(i);
        }
        return maxA;
    }
};

int main(void)
{
    Solution obj;
    // vector<vector<char>> matrix = {
    //     {'1', '0', '1', '0', '0'},
    //     {'1', '0', '1', '1', '1'},
    //     {'1', '1', '1', '1', '1'},
    //     {'1', '0', '0', '1', '0'}};
    vector<vector<char>> matrix = {
        {'0', '1'},
        {'1', '0'}};
    cout << obj.maximalRectangle(matrix) << endl;
    return 0;
}