#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_set<string> st;
    int n;

public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        n = nums.size();

        for (auto item : nums)
            st.insert(item);

        return get_content("");
    }
    string get_content(string cur)
    {
        if (n == cur.size())
        {
            cout << cur << endl;
            if (st.find(cur) == st.end())
                return cur;

            return "";
        }
        // cout << "cur -> " << cur << endl;
        string value = get_content(cur + '0');
        // cout << "value -> " << value << endl;
        if (value.size() > 0)
            return value;

        return get_content(cur + '1');
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"000", "010", "00", "01"};
    cout << obj.findDifferentBinaryString(arr) << endl;
    return 0;
}