
typedef pair<int, ListNode *> IPair;
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *dummyNode = new ListNode(0);
        ListNode *tail = dummyNode;

        // define a priority queue
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;

        // insert all list head into priority queue
        for (auto head : lists)
        {
            if (head != NULL)
                pq.push({head->val, head});
        }

        while (!pq.empty())
        {
            ListNode *temp = pq.top().second;
            pq.pop();

            if (temp->next)
                pq.push({temp->next->val, temp->next});

            tail->next = temp;
            tail = tail->next;
        }

        return dummyNode->next;
    }
};