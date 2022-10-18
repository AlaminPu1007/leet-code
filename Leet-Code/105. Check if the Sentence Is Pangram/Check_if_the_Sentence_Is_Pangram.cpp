#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26] = { 0 };
        for(int i = 0; sentence[i] != '\0'; i++)
            if(sentence[i] >= 'a' && sentence[i] <= 'z')
                freq[sentence[i]-'a']++;
        
        for(int i = 0; i < 26; i++)
            if(!freq[i]) return false;
            
       return true;
    }
};

int main(void)
{
    Solution obj;
    string str = "thequickbrownfoxjumpsoverthelazydog";
    bool res =  obj.checkIfPangram(str);
    
    cout<<res<<endl;
    return 0;
}