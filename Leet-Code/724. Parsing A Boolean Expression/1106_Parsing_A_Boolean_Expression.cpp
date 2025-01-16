#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool parseBoolExpr(string expression)
  {
    int i = 0;
    return DFS(expression, i);
  }

private:
  bool DFS(string &str, int &i)
  {
    // get current character
    char curChar = str[i];

    // skip next '(' by increment i pointer
    i++;

    // handle base case for t & f
    if (curChar == 't')
      return true;

    if (curChar == 'f')
      return false;

    if (curChar == '!')
    {
      // skip current '(' open parenthesis
      i++;

      bool res = !DFS(str, i);

      // skip next ')' by increment i pointer, ex: "!(t)"
      i++;

      return res;
    }

    // do stuff for AND '&(...)' and OR '|(...)'
    vector<bool> values;

    // skip current '(' open parenthesis
    i++;

    // get all expression till it's close parenthesis. ex: "&(f,f,t,&(t,f))"
    while (str[i] != ')')
    {
      if (str[i] != ',')
      {
        values.push_back(DFS(str, i));
      }
      else
      {
        // skip commas
        i++;
      }
    }

    // skip current ')' close parenthesis
    i++;

    // Manual AND operation: returns false if any value is false
    if (curChar == '&')
    {
      for (auto item : values)
      {
        if (!item)
          return false;
      }
      return true;
    }

    // handle '|' operator, if any of them is true, return true
    if (curChar == '|')
    {
      for (auto item : values)
      {
        if (item)
          return true;
      }
      return false;
    }

    // technically it's not possible to reached here
    return false;
  }
};

int main(void)
{
  Solution obj;
  // string str = "&(t,|(f,f,t),!(t))";
  string str = "!(&(f,t)";
  cout << obj.parseBoolExpr(str);
  return 0;
}