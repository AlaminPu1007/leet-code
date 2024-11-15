#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isCircularSentence(string sentence)
    {
        int n = sentence.size();

        for (int i = 0; i < n; i++)
        {
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1])
                return false;
        }

        return sentence[0] == sentence[n - 1];
    }
};

int main(void)
{
    Solution obj;
    string sentence = "leetcode exercises sound delightful";
    cout << obj.isCircularSentence(sentence) << endl;
    return 0;
}