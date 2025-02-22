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
    TreeNode *reverseOddLevels(TreeNode *root)
    {
        if (!root)
            return NULL;

        queue<TreeNode *> q;
        q.push(root);

        int level = 0;
        while (q.size())
        {
            int size = q.size();
            vector<TreeNode *> currentLevelNodes;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                currentLevelNodes.push_back(node);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            if (level % 2 == 1)
            {
                int left = 0, right = currentLevelNodes.size() - 1;

                while (left < right)
                {

                    int temp = currentLevelNodes[left]->val;

                    currentLevelNodes[left]->val = currentLevelNodes[right]->val;
                    currentLevelNodes[right]->val = temp;

                    left++;
                    right--;
                }
            }
            level++;
        }
        return root;
    }

public:
    void viewLists(TreeNode *root)
    {
        if (!root)
            return;

        cout << root->val << " ";

        if (root->left)
            viewLists(root->left);

        if (root->right)
            viewLists(root->right);
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(3);
    root->right = new TreeNode(5);

    root->left->left = new TreeNode(8);
    root->left->right = new TreeNode(13);

    root->right->left = new TreeNode(21);
    root->right->right = new TreeNode(34);

    TreeNode *res = obj.reverseOddLevels(root);

    cout << "Print the list : ";
    obj.viewLists(res);

    return 0;
}