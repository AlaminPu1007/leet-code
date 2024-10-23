#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool areSentencesSimilar(string sentence1, string sentence2)
  {

    int n = sentence1.size(), m = sentence2.size();

    if (m < n)
      swap(sentence1, sentence2);

    istringstream iss1(sentence1);
    istringstream iss2(sentence2);

    deque<string> s1, s2;

    string word;

    // Extract words from sentence1 and store them in deque s1
    while (iss1 >> word)
    {
      s1.push_back(word); // Add each word to the deque
    }

    // Extract words from sentence2 and store them in deque s2
    while (iss2 >> word)
    {
      s2.push_back(word); // Add each word to the deque
    }

    // check longest matching prefix
    while (!s1.empty() && !s2.empty() && s1.front() == s2.front())
    {
      s1.pop_front(); // Remove the front word from both deques
      s2.pop_front();
    }

    // check longest matching suffix
    while (!s1.empty() && !s2.empty() && s1.back() == s2.back())
    {
      s1.pop_back(); // Remove the front word from both deques
      s2.pop_back();
    }

    return s1.empty();
  }
};

int main(void)
{
  Solution obj;
  string sentence1 = "My name is Haley", sentence2 = "My Haley";
  cout << obj.areSentencesSimilar(sentence1, sentence2) << endl;
  return 0;
}