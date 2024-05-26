/*
  Time-Complexity: `O(n * log(n))`
  Space-Complexity: `O(n)`
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
      long long res = 0;

        // sort the array
        sort(happiness.begin(), happiness.end(), greater<int>());
        int i = 0;

        while(k--)
        {
            res += max(happiness[i] - i,0);
            i++;
        }

        return res;  
    }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {12,1,42};
  cout<<obj.maximumHappinessSum(arr, 3); 
  return 0; 
}