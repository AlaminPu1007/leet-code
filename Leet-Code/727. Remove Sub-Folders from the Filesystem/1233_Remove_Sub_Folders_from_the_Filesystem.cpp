#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> removeSubfolders(vector<string> &folder)
    {
        vector<string> res;
        unordered_set<string> st(folder.begin(), folder.end());

        for (auto item : folder)
        {
            res.push_back(item);

            for (int i = 0; i < item.size(); i++)
            {
                if (item[i] == '/' && st.count(item.substr(0, i)))
                {
                    res.pop_back();
                    break;
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"/a", "/a/b", "/c/d", "/c/d/e", "/c/f"};
    vector<string> res = obj.removeSubfolders(str);

    for (auto item : res)
        cout << item << " ";
    return 0;
}