#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        int len = operations.size(), result = 0;
        vector<string> copy;

        for (int i = 0; i < len; i++)
        {
            // removing previous string from array
            if (operations[i] == "C")
            {
                copy.pop_back();
            }
            else if (operations[i] == "D")
            {
                int num = stoi(copy[copy.size() - 1]);
                int double_value = num * 2;
                string make_string = to_string(double_value);
                copy.push_back(make_string);
            }
            else if (operations[i] == "+")
            {
                int num = stoi(copy[copy.size() - 1]), num2 = stoi(copy[copy.size() - 2]);
                int double_sum = num + num2;
                string make_string = to_string(double_sum);
                copy.push_back(make_string);
            }
            else
            {
                copy.push_back(operations[i]);
            }
        };

        int copy_len = copy.size();

        for (int i = 0; i < copy_len; i++)
            result += stoi(copy[i]);

        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<string> s = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    int res = obj.calPoints(s);
    cout << res << endl;
    return 0;
}