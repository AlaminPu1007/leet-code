#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        if(n <= 1)
            return n;

        return (int)sqrt(n);
    }
};

int main(void)
{
    Solution obj;
    cout<<obj.bulbSwitch(3)<<endl;
    return 0;
}