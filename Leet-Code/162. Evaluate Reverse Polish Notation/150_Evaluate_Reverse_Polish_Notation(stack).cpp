#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        int n = tokens.size();

        for (int i = 0; i < n; i++)
        {
            if (tokens[i] == "+")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(first + second);
            }

            else if (tokens[i] == "-")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(second - first);
            }

            else if (tokens[i] == "*")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(first * second);
            }

            else if (tokens[i] == "/")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(int(second / first));
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << obj.evalRPN(str) << endl;
    return 0;
}