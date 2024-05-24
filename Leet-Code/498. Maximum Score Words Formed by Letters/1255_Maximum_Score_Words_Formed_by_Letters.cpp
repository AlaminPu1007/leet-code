#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScoreWords(vector<string> &words, vector<char> &letters, vector<int> &score)
    {
        unordered_map<int, int> lettersCount;

        // count each given letter array frequency
        // we will deduct it's frequency whenever we choose any word from word's array
        for (auto item : letters)
            lettersCount[item]++;

        return DFS(0, words, lettersCount, score);
    }

private:
    int DFS(int index, vector<string> &words, unordered_map<int, int> &lettersCount, vector<int> &score)
    {
        // handle the base case
        // if we out of the bound
        if (index >= words.size())
            return 0;

        int res = INT_MIN;

        // if we choose to not pick the current word
        res = DFS(index + 1, words, lettersCount, score);

        // if we choose to pick them

        // if current word have not enough frequency
        if (isValidWord(words[index], lettersCount))
        {
            // if it's a valid word, then we need to deduct this much of frequency
            // from lettersCount hash-map
            for (auto c : words[index])
                lettersCount[c]--;

            // call the recursive approach
            res = max(res, getScore(words[index], score) + DFS(index + 1, words, lettersCount, score));

            // after completed the recursion, we restore the current word frequency
            // we do not mess up them for next valid answer if it's present
            for (auto c : words[index])
                lettersCount[c]++;
        }

        return res;
    }

private:
    bool isValidWord(string word, unordered_map<int, int> &lettersCount)
    {
        // count current word frequency
        unordered_map<int, int> freq;

        for (auto item : word)
            freq[item]++;

        for (auto c : word)
        {
            if (freq[c] > lettersCount[c])
                return false;
        }

        return true;
    }
    // calculate each valid word score from score array
private:
    int getScore(string word, vector<int> score)
    {
        int sum = 0;

        for (auto c : word)
            sum += score[(c - 'a')];

        return sum;
    }
};

int main(void)
{
    Solution obj;

    vector<string> words = {"dog", "cat", "dad", "good"};
    vector<char> letters = {'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
    vector<int> score = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << obj.maxScoreWords(words, letters, score) << endl;
    return 0;
}