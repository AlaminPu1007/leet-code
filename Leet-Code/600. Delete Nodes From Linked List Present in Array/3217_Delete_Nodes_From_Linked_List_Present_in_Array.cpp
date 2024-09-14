#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    ListNode *next;
    int val;
    ListNode(int _v)
    {
        next = NULL;
        val = _v;
    }
};

class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_set<int> st(nums.begin(), nums.end());

        // handle case where head should be removed
        while (head && st.count(head->val) > 0)
        {
            // to head ref into temp node
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }

        // If the list is empty after removing head nodes, return nullptr
        if (head == nullptr)
        {
            return nullptr;
        }

        ListNode *curNode = head;

        while (curNode->next)
        {
            if (st.count(curNode->next->val) > 0)
            {
                ListNode *temp = curNode->next;
                curNode->next = curNode->next->next;
                delete temp;
            }
            else
                curNode = curNode->next;
        }
        return head;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};

    return 0;
}