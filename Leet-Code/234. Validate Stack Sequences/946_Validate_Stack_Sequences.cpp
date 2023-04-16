#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int len = pushed.size();
        int j = 0;
        // define stack data-structure
        stack<int> st;

        for (int i = 0; i < len; i++)
        {
            // push item into stack
            st.push(pushed[i]);

            // pop element from stack if we get stack.top() element is equal to popped j'th element
            // check boundary to avoid memory segment error issue
            while (!st.empty() && j < len && st.top() == popped[j])
            {
                // removed item from stack
                st.pop();
                j++;
            }
        }
        // we can return st.empty()
        // but it has ` more efficient
        return j == len;
    }
};

int main(void)
{
    Solution obj;
    vector<int> pushed = {1, 2, 3, 4, 5}, popped = {4, 5, 3, 2, 1};
    cout << obj.validateStackSequences(pushed, popped) << endl;
    return 0;
}