#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *pseudoHead = head;

        // First round: make copy of each node,
        // and link them together side-by-side in a single list.

        while (pseudoHead != NULL)
        {
            // initialize node for duplication
            Node *newNode = new Node(pseudoHead->val), *copyNextNode;

            // make a copy of next element
            copyNextNode = pseudoHead->next;

            // now connect node with it duplicate node
            pseudoHead->next = newNode;
            newNode->next = copyNextNode;

            // update node for iteration to next node
            pseudoHead = copyNextNode;
        }

        // Second round: assign random pointers for the copy nodes.
        pseudoHead = head;

        while (pseudoHead != NULL)
        {
            if (pseudoHead->random)
            {
                pseudoHead->next->random = pseudoHead->random->next;
            }

            pseudoHead = pseudoHead->next->next;
        }

        // Third round: restore the original list, and extract the copy list.
        Node *newHead = new Node(0);
        Node *front = head, *copy = newHead;

        pseudoHead = head;

        while (pseudoHead != NULL)
        {
            front = pseudoHead->next->next;
            copy->next = pseudoHead->next;

            pseudoHead->next = front;

            copy = copy->next;
            pseudoHead = front;
        }

        return newHead->next;
    }

    void printNodeList(Node *head)
    {
        while (head)
        {
            cout << head->val;

            if (head->next)
                cout << " -> ";

            head = head->next;
        }
    }
};

int main(void)
{
    Solution obj;
    // initialize node with next pointer
    Node *head = new Node(7);
    Node *item1 = new Node(13);
    head->next = item1;
    Node *item2 = new Node(11);
    item1->next = item2;
    Node *item3 = new Node(10);
    item2->next = item3;
    Node *item4 = new Node(1);
    item3->next = item4;

    // connect with random pointer
    head->random = NULL;
    item1->random = head;
    item2->random = item4;
    item3->random = item2;
    item4->random = head;

    // cout << head->random << " " << head->next->random->val << endl;
    // return 0;

    obj.printNodeList(head);
    cout << endl;

    Node *res = obj.copyRandomList(head);

    obj.printNodeList(res);
    cout << endl;

    return 0;
}