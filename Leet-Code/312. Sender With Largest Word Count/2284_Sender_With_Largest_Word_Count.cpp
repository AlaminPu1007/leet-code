#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestWordCount(vector<string> &messages, vector<string> &senders)
    {
        string ans = "";
        int maxCount = 0;
        int len = messages.size();
        unordered_map<string, int> Map;

        for (int i = 0; i < len; i++) // iterate over this messages has O(n) times
        {

            // count words can take `O(n)` times
            int countWord = count(messages[i].begin(), messages[i].end(), ' ') + 1;

            // store in map, put +1 for last word
            Map[senders[i]] += countWord;

            int total = Map[senders[i]];

            if (total > maxCount || (total == maxCount && senders[i] > ans))
            {
                ans = senders[i];
                maxCount = total;
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> m = {"Hello userTwooo", "Hi userThree", "Wonderful day Alice", "Nice day userThree"};
    vector<string> s = {"Alice", "userTwo", "userThree", "Alice"};
    cout << obj.largestWordCount(m, s) << endl;
    return 0;
}