#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> st;
        string cur = "";

        // put an extra "/" in the end of path, to ensure our code work easier
        // if we do not put '/' at end, for given path we will not split one path from stark
        path.push_back('/');

        int len = path.size();

        for (int i = 0; i < len; i++)
        {
            if (path[i] == '/')
            {
                // go  back one directory
                if (cur == "..")
                {
                    if (!st.empty())
                    {
                        st.pop();
                    }
                }
                // if we get any ".", we just ignore it
                // if directory is valid string
                else if (cur != "" && cur != ".")
                    st.push(cur);

                cur = "";
            }
            else
                cur += path[i];
        }

        string ans = "";

        while (!st.empty())
        {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans == "" ? "/" : ans;
    }
};

int main(void)
{
    Solution obj;
    // string str = "/../abc//./def/";
    string str = "/a//b////c/d//././/..";
    cout << obj.simplifyPath(str) << endl;
    return 0;
}