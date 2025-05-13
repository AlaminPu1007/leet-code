#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countOfSubstrings(string word, int k)
    {
        int n = word.size();

        return atleastK(word, k) - atleastK(word, k + 1);
    }

private:
    long long atleastK(string word, int k)
    {
        unordered_map<char, int> vowelsCount;
        long long res = 0, non_vowels_count = 0, l = 0;

        for (int i = 0; i < word.size(); i++)
        {
            if (isVowel(word[i]))
            {
                vowelsCount[word[i]]++;
            }
            else
                non_vowels_count++;

            while (vowelsCount.size() == 5 && non_vowels_count >= k)
            {
                res += (word.size() - i);

                if (isVowel(word[l]))
                {
                    vowelsCount[word[l]]--;
                }
                else
                    non_vowels_count--;

                if (vowelsCount[word[l]] == 0)
                    vowelsCount.erase(word[l]);

                l++;
            }
        }

        return res;
    }

private:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

int main(void)
{
    Solution obj;
    string word = "ieaouqqieaouqq";
    int k = 1;

    cout << obj.countOfSubstrings(word, k) << endl;

    return 0;
}