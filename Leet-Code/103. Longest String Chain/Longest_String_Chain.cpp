#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int len = words.size();
        int res = 0;
        map<string, int>Map;

        //sorting a string vector based on the string size
        //learn more -> https://stackoverflow.com/questions/18831470/sorting-a-string-vector-based-on-the-string-size
        
        sort(words.begin(), words.end(), [](const string& first, const string& second)
        {
            return first.size() < second.size();
        });
        
        for(string word:words)
        {
            int longest =0;
            int each_word_len = word.length();
            for(int i = 0;i < each_word_len;i++)
            {
                string sub = word.substr(0,i) + word.substr(i+1,each_word_len+1);
                longest = max(longest,Map[sub]+1);   
            }
            
            Map[word] = longest;
            res = max(res,longest);
        }
        
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"a","b","ba","bca","bda","bdca"};
    int res = obj.longestStrChain(str);
    cout<<res<<endl;
    return 0;
}