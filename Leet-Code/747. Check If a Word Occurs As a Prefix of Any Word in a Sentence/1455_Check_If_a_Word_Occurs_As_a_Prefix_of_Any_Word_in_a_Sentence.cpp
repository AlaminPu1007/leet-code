#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        stringstream s(sentence);
        string word;
        int index = 1; // 1-based index

        while (s >> word) // Split the sentence into words
        {
            // Check if the searchWord is a prefix of the current word
            if (word.size() >= searchWord.size() && word.substr(0, searchWord.size()) == searchWord)
            {
                return index;
            }
            index++;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    string sentence = "love dumb leetcode love", searchWord = "lov";

    cout << obj.isPrefixOfWord(sentence, searchWord) << endl;
    return 0;
}