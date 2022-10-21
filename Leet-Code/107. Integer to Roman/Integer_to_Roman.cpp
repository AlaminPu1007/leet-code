#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
         vector<pair<int, string>> Map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
                                         {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
                                         {5, "V"}, {4, "IV"}, {1, "I"}};
		
        string res = "";
        
        for(auto item: Map)
        {
            while(num >= item.first)
            {
                res += item.second;
                num -= item.first;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.intToRoman(3);
    cout<<"ans is : "<<ans<<endl;
    return 0;
}