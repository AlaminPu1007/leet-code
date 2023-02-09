#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int len1 = s.size(), len2 = p.size();
        // if s len is less than to p, then return empty
        if (len1 < len2)
            return {};

        // define window, and p string vector array
        // which hold to frequency of each array element
        // hold to constant space
        vector<int> window(26, 0), freq_p(26, 0);

        // store p-string frequency as well as s-stirng first p-string length char frequency
        for (int i = 0; i < len2; i++)
        {
            freq_p[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }
        vector<int> ans;

        // check for first window of p_length
        //  That mean, first matching string with p-string
        if (freq_p == window)
            ans.push_back(0);

        // check remain character after p_length
        for (int i = len2; i < len1; i++)
        {
            // decrement previously(left) char freq by 1
            window[s[i - len2] - 'a']--;
            // increment current char freq by 1
            window[s[i] - 'a']++;

            // if freq_p is equal to window then, push staring matching index inside our ans array
            if (freq_p == window)
                ans.push_back(i - len2 + 1);
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "cbaebabacd", p = "abc";
    vector<int> res = obj.findAnagrams(s, p);
    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}