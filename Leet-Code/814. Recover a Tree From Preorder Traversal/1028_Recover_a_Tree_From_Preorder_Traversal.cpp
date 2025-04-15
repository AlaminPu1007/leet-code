#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int _v)
    {
        val = _v;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    TreeNode *recoverFromPreorder(string traversal)
    {
        stack<TreeNode *> st;

        int i = 0;
        int n = traversal.size();

        while (i < n)
        {
            // initialized a depth value
            int depth = 0;

            // get the depth from the dashes
            // Count the number of dashes
            while (i < n && traversal[i] == '-')
            {
                i++;
                depth++;
            }

            // initialized a value to get the number or digits
            int value = 0;

            while (i < n && isdigit(traversal[i]))
            {
                value = value * 10 + (traversal[i] - '0');
                i++;
            }

            // create the current node
            TreeNode *node = new TreeNode(value);

            while (st.size() && st.size() > depth)
                st.pop();

            if (st.size() && !st.top()->left)
                st.top()->left = node;

            else if (st.size())
                st.top()->right = node;

            // insert current node into stack
            st.push(node);
        }

        while (st.size() > 1)
            st.pop();

        return st.top();
    }
};

int main(void)
{
    Solution obj;
    string s = "1-2--3---4-5--6---7";

    TreeNode = *res = obj.recoverFromPreorder(s);

    return 0;
}