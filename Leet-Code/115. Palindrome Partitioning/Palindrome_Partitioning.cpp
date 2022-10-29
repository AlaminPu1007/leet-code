#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
  vector<vector<string>>partition (string &str)
  {
      vector<vector<string>> result;
      vector<string>db;
      //  called recursive method for palindrome-Partitioning 
      Solved(str, result, db, 0);
      
      return result;
  };
  //Recursive Method 
  void Solved(string &str, vector<vector<string>> &result, vector<string> &db, int idx)
  {
      if(idx == str.size())
      {
         result.push_back(db); 
         return ;
      }
      
      for(int i = idx; i < str.size(); i++)
      {
          if(isVlaidPalindrome(idx, i, str))
          {
              db.push_back(str.substr(idx, i - idx + 1));
              
              Solved(str, result, db, i+1);
              
              //backtrack to remove previous added string
              db.pop_back();
          }
      }
  }
  // Check valid palindrome string
  bool isVlaidPalindrome(int start, int end, string original_str)
  {
      while(start <= end)
      {
          if(original_str[start++] != original_str[end--])
           return false;
      }
      return true;
  }
};

int main(void)
{
    Solution obj;
    string str = "aab";
    vector<vector<string>> ans = obj.partition(str);
    
    for(int i = 0; i < ans.size(); i++)
    {   
        for(int j = 0; j < ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
            
        cout<<endl;
    }
    return 0;
}