#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> twoEditWords(vector<string> &queries, vector<string> &dictionary)
    {
        vector<string> res;

        for (auto q : queries)
        {

            for (auto d : dictionary)
            {
                int count = 0;

                for (int i = 0; i < q.size(); i++)
                {
                    if (q[i] != d[i])
                        count++;
                }

                if (count <= 2)
                {
                    res.push_back(q);
                    break;
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<string> queries = {"word", "note", "ants", "wood"}, dictionary = {"wood", "joke", "moat"};

    vector<string> res = obj.twoEditWords(queries, dictionary);

    cout << "OutPut: ";

    for (auto item : res)
        cout << item << " ";

    return 0;
}