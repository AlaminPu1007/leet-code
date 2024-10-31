
/**
 * To solve this problem we need a Stack dsa. The main goal is to if we found any open parenthesis
 * create a new empty stack
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string countOfAtoms(string formula)
  {
    // initialize a stack data structure to hold the current formula.
    stack<unordered_map<string, int>> st;

    // put a empty {} for root item
    st.push(unordered_map<string, int>());

    int index = 0, n = formula.size();

    while (index < n)
    {
      // if we found any open parenthesis create a new empty stack
      if (formula[index] == '(')
      {
        // create a new environment for current formula [ex: `(...)`]
        st.push(unordered_map<string, int>());
        index++;
      }

      // if it's the end of parenthesis
      // If right parenthesis, pop the top element from the stack
      // Multiply the count with the multiplicity of the nested formula
      else if (formula[index] == ')')
      {
        unordered_map<string, int> curFormula = st.top();
        st.pop();

        // update current index to avoid the current `)` item
        index++;

        string curMultiply;

        while (index < n && isDigit(formula[index]))
        {
          curMultiply += formula[index++];
        }

        // iterate over the curFormula and update their equation
        if (curMultiply.size())
        {
          int count = stoi(curMultiply);

          for (auto item : curFormula)
          {
            curFormula[item.first] = (item.second * count);
          }
        }

        // update the root of the current stack
        unordered_map<string, int> &topMap = st.top();

        for (auto item : curFormula)
        {
          topMap[item.first] += item.second;
        }
      }

      // if this is the regular formula without parenthesis
      else
      {
        string curFormula, curCount;

        curFormula += formula[index++];

        // if current formula followed any lowercase letters
        // ex: Hiu -> all will be count as a single
        while (index < n && islowerCase(formula[index]))
        {
          curFormula += formula[index++];
        }

        // check if current atom or formula has any count ex: H2
        while (index < n && isDigit(formula[index]))
        {
          curCount += formula[index++];
        }

        int count = curCount.size() ? stoi(curCount) : 1;

        // get stack top most item, and update it's equation
        // ex: S2 + S6 => S8 at the end
        unordered_map<string, int> &topMap = st.top();
        topMap[curFormula] += count;
      }
    }

    string res = "";

    map<string, int> Map(st.top().begin(), st.top().end());

    for (auto item : Map)
    {
      res += item.first;

      if (item.second > 1)
        res += to_string(item.second);
    }

    return res;
  }

private:
  bool islowerCase(char ch)
  {
    if (ch >= 'a' && ch <= 'z')
      return true;

    return false;
  }

private:
  bool isDigit(char ch)
  {
    if (ch >= '0' && ch <= '9')
      return true;

    return false;
  }
};

int main(void)
{
  Solution obj;
  string s = "K4(ON(SO3)2)2";
  cout << obj.countOfAtoms(s) << endl;
  return 0;
}