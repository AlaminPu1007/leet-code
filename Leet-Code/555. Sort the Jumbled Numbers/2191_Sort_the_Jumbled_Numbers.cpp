#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
  {
    // store nums with index
    vector<pair<int, int>> pairs;

    for (int i = 0; i < nums.size(); i += 1)
    {
      string item = to_string(nums[i]);
      string num = getCurrentString(item, mapping);

      // convert into integer
      int number = stoi(num);

      pairs.push_back({number, i});
    }

    // sort pairs with non descending order
    sort(pairs.begin(), pairs.end());

    vector<int> res;

    for (int i = 0; i < pairs.size(); i++)
    {
      int idx = pairs[i].second;
      res.push_back(nums[idx]);
    }

    return res;
  }

private:
  string getCurrentString(string str, vector<int> &mapping)
  {
    string ans = "";

    for (int i = 0; i < str.size(); i++)
    {
      char ch = str[i];
      int idx = ch - '0';

      ans += to_string(mapping[idx]);
    }

    return ans;
  }
};

int main(void)
{
  Solution obj;
  vector<int> mapping = {8, 9, 4, 0, 2, 1, 3, 5, 7, 6}, nums = {991, 338, 38};
  vector<int> res = obj.sortJumbled(mapping, nums);

  for (auto item : res)
    cout << item << " ";

  return 0;
}