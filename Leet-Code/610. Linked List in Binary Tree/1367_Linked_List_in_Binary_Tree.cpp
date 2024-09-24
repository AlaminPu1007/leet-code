#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int _v)
    {
        next = NULL;
        val = _v;
    }
};

class TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    bool isSubPath(ListNode *head, TreeNode *root)
    {
        // handle the base case
        if (!root)
            return false;

        if (isValidPath(root, head))
            return true;

        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }

private:
    bool isValidPath(TreeNode *root, ListNode *head)
    {
        if (!head)
            return true;

        if (!root || root->val != head->val)
            return false;

        return isValidPath(root->left, head->next) || isValidPath(root->right, head->next);
    }
};

int main(void)
{
    Solution obj;
    return 0;
}