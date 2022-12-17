#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        // get last element from tokens
        string t = tokens.back();
        // removed last element from tokens
        tokens.pop_back();

        // if "t" is not math with any operator, convert "t" into integer
        if (t != "+" && t != "-" && t != "*" && t != "/")
            return stoi(t);

        else
        {
            int b = evalRPN(tokens);
            int a = evalRPN(tokens);
            if (t == "+")
                return a + b;
            else if (t == "-")
                return a - b;
            else if (t == "*")
                return (long)a * b;
            else
                return a / b;
        }
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    int res = obj.evalRPN(arr);
    cout << res << endl;
    return 0;
}