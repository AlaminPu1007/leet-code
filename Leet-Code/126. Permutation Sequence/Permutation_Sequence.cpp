#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>numbers;
        int fact = 1;
        
        for(int i = 1; i < n; i++)
        {
            fact *= i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        
        //for 0 base indexing we need to k subtract by 1
        k--;
        string ans = "";
        while(1)
        {
            ans += to_string(numbers[k / fact]);
            //after taking an value we need to erase it from our array
            numbers.erase(numbers.begin() + k / fact);
            // this case for break loop
            if(numbers.size() == 0)
                break;
            
            // also update k value
            k %= fact; 
            // update fact value by divided it numbers arary size;
            fact /= numbers.size();
        }
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.getPermutation(3, 3);
    cout<<ans<<endl;
    return 0;
}