#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        int n = s.size();
        unordered_map<char, int> Map;
        int ans = -1;

        for (int i = 0; i < n; i++)
        {

            if (Map.find(s[i]) != Map.end())
            {
                ans = max(ans, i - Map[s[i]] - 1);
            }
            else
            {
                // if character is already present, we will skip it to push newly into map
                // ex: "abhdfkjajdfda"; we wanted from first to last find duplicated character from beginning
                Map[s[i]] = i;
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "abhdfkjajdfda";
    cout << obj.maxLengthBetweenEqualCharacters(s) << endl;
    return 0;
}