

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
        return NULL;

        queue<Node *>q;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                Node *temp = q.front();
                q.pop();

                // if it's last item, then put NULL to the next pointer
                if(i == n - 1)
                {
                    temp->next = NULL;
                }
                // points to it's next node
                else {
                    temp->next = q.front();
                }

                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                
                    q.push(temp->right);
            }
        }

        return root;
    }
};

