#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string firstPalindrome(vector<string> &words)
  {
    for (auto item : words)
      if (isPalindromicWord(item))
        return item;

    return "";
  }

private:
  bool isPalindromicWord(string word)
  {
    int n = word.size();

    for (int i = 0; i < n; i++)
      if (word[i] != word[n - 1 - i])
        return false;

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
  cout << obj.firstPalindrome(words);
  return 0;
}
