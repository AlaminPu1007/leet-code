#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> res;
        int count = 0;
        for (auto item : words)
        {
            if (item.find(x) != string::npos)
                res.push_back(count);
            count++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"leet", "code"};
    char x = 'e';

    vector<int> res = obj.findWordsContaining(arr, x);

    for (auto item : res)
        cout << item << " ";

    return 0;
}