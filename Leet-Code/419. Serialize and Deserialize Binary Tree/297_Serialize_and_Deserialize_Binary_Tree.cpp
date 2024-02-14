
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

class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (root == NULL)
            return "";

        string str = "";

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (node == NULL)
                str.append("#,");
            else
                str.append(to_string(node->val) + ',');

            if (node != NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }
        }

        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        if (data.size() == 0)
            return NULL;

        // convert string as a object
        stringstream s(data);
        string str;

        getline(s, str, ',');
        TreeNode *root = new TreeNode(stoi(str));

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            getline(s, str, ',');

            if (str == "#")
            {
                node->left = NULL;
            }
            else
            {
                TreeNode *left = new TreeNode(stoi(str));
                node->left = left;
                q.push(left);
            }

            getline(s, str, ',');

            if (str == "#")
            {
                node->right = NULL;
            }
            else
            {
                TreeNode *right = new TreeNode(stoi(str));
                node->right = right;
                q.push(right);
            }
        }
        return root;
    }

public:
    void DFS(TreeNode *root)
    {
        if (root == NULL)
            return;

        cout << root->val << "->";
        DFS(root->left);
        DFS(root->right);
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

    Codec obj;
    string res = obj.serialize(root);

    TreeNode *ans = obj.deserialize(res);

    obj.DFS(ans);

    return 0;
}
