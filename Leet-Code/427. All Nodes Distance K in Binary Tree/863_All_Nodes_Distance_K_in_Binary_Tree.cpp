
#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

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
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> res;

        // keep track key, parent (ex: key will be node, and parent will be parent of key node)
        unordered_map<TreeNode *, TreeNode *> parent_node;

        // store each key node
        makeParents(root, parent_node);

        // print all key node with their parent_node
        for (auto item : parent_node)
        {
            cout << item.first->val << " -> " << item.second->val << endl;
        }

        unordered_map<TreeNode *, bool> vis;

        queue<TreeNode *> q;
        q.push(target);

        // mark as well as it visited
        vis[target] = true;

        int level = 0;

        while (!q.empty())
        {
            int size = q.size();

            // continue till k
            if (level++ == k)
                break;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                // check left child
                if (node->left && !vis[node->left])
                {
                    q.push(node->left);
                    vis[node->left] = true;
                }

                // check right child
                if (node->right && !vis[node->right])
                {
                    q.push(node->right);
                    vis[node->right] = true;
                }

                // check as well as their parent
                if (parent_node[node] && !vis[parent_node[node]])
                {
                    q.push(parent_node[node]);
                    vis[parent_node[node]] = true;
                }
            }
        }

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            res.push_back(node->val);
        }

        return res;
    }

private:
    // This method help us to get parent node of each node
    void makeParents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_node)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *parent = q.front();
            q.pop();

            // Assign parents to left child and
            // right child if they exist
            if (parent->left)
            {
                parent_node[parent->left] = parent;
                q.push(parent->left);
            }

            if (parent->right)
            {
                parent_node[parent->right] = parent;
                q.push(parent->right);
            }
        }
    }
};

int main(void)
{
    // https://www.geeksforgeeks.org/inorder-traversal-of-binary-tree/
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    vector<int> res = obj.distanceK(root, root->left, 1);

    for (auto item : res)
    {
        cout << item << " ";
    }

    return 0;
}
