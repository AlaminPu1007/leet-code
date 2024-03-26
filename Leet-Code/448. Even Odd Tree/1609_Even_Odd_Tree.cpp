
#include <bits/stdc++.h>
using namespace std;

// create tree node
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {
        val = x;
    }
};

class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        // define a queue data-structure for Level order traversal(BFS)
        queue<TreeNode *> q;

        bool even = true;

        q.push(root);

        while (!q.empty())
        {

            int size = q.size();

            int tempValue = even ? INT_MIN : INT_MAX;

            // traverse level order in the tree
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                // removed from queue
                q.pop();

                // for even level
                if ((even && (node->val % 2 == 0 || node->val <= tempValue)) || (!even && (node->val % 2 == 1 || node->val >= tempValue)))
                {
                    return false;
                }

                tempValue = node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            even = !even;
        }

        return true;
    }
};

int main(void)
{
    // level-> 1
    TreeNode *root = new TreeNode(1);
    // level-> 2
    root->left = new TreeNode(10);
    root->right = new TreeNode(4);
    // level -> 3
    root->left->left = new TreeNode(3);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    Solution obj;
    cout << obj.isEvenOddTree(root) << endl;

    return 0;
}