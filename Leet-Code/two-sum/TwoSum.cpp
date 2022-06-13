#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  std::vector<int> twoSum(vector<int>& num,int target){
      vector<int>arr;
      map<int,int> Objects;
      int i, j, sum = 0,value;
      
      int n = num.size();
      
      for(i = 0; i < n; i++)
      {
          sum = target - num[i];
          
          //cout<<"sum = "<<sum<<endl;
          
          if(Objects.find(sum) != Objects.end())
          {
              auto item = Objects.find(sum);
            //   cout<< "first = " << item->first << '\t'<<"second = " << item->second << '\n';
              arr.push_back(item->second);
              //cout<<"value of i = "<<i<<endl;
              arr.push_back(i);
          }
          
          Objects.insert(make_pair(num[i], i));
      }
      
    return arr;
      
  }
};

