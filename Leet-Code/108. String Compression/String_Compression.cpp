#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int len = chars.size();
        int index = 0;
        
        if(len <= 1)
            return len;
        int i = 0;
        for(int i = 0; i < len; i++)
        {
            int count = 1;
            while(i < len-1 && chars[i] == chars[i+1])
            {
                count++;
                i++;
            }
            // FOR ADDING THE CHARACTER AT IT'S CORRECT POSITION
            chars[index++] = chars[i];
            // FOR ADDING THE COUNT OF EACH CHARACTER AT IT'S CORRECT POSITION
            if(count != 1)
            {
                for(auto item: to_string(count))
                    chars[index++] = item;
            }
        }
        return index;
    }
};

int main(void)
{
    Solution obj;
    vector<char> chars = {'a','a','b','b','b'};
    int res = obj.compress(chars);
    cout<<res<<endl;
    return 0;
}