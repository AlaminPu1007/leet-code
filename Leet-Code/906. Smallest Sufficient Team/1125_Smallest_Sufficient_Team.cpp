#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallestSufficientTeam(vector<string> &req_skills, vector<vector<string>> &people)
    {
        int n = req_skills.size(), m = people.size();
        int mask = pow(2, n) - 1;
        vector<int> res;
        unordered_map<string, int> dp;

        unordered_map<string, int> skills;
        vector<int> people_skills;

        for (int i = 0; i < n; i++)
        {
            skills[req_skills[i]] = i;
        }

        for (auto item : people)
        {
            int bits = 0;

            for (auto it : item)
                bits |= (1 << skills[it]);

            people_skills.push_back(bits);
        }

        vector<int> temp;

        Solved(0, skills, people_skills, temp, res, mask, 0, n, m, dp);

        return res;
    }

private:
    void Solved(int i, unordered_map<string, int> &skills, vector<int> &people_skills, vector<int> &temp, vector<int> &res, int target_mask, int mask, int n, int m, unordered_map<string, int> &dp)
    {
        if (i == people_skills.size())
        {
            if (mask == target_mask)
            {
                if (!res.size() || (res.size() >= temp.size()))
                {
                    res = temp;
                }
            }
            return;
        }

        string key = to_string(i) + to_string(mask);

        if (dp.find(key) != dp.end())
            if (dp[key] <= temp.size())
                return;

        if (res.size() && res.size() < temp.size())
            return;

        // if we not pick current item
        Solved(i + 1, skills, people_skills, temp, res, target_mask, mask, n, m, dp);

        if ((mask | people_skills[i]) != mask)
        {
            temp.push_back(i);

            // if we choose current item
            Solved(i + 1, skills, people_skills, temp, res, target_mask, mask | people_skills[i], n, m, dp);

            temp.pop_back();

            dp[key] = temp.size() ? temp.size() : -1;
        }
    }
};

int main(void)
{
    Solution obj;
    vector<string> req_skill = {"algorithms", "math", "java", "reactjs", "csharp", "aws"};
    vector<vector<string>> people = {{"algorithms", "math", "java"}, {"algorithms", "math", "reactjs"}, {"java", "csharp", "aws"}, {"reactjs", "csharp"}, {"csharp", "math"}, {"aws", "java"}};

    vector<int> res = obj.smallestSufficientTeam(req_skill, people);

    for (auto item : res)
        cout << item << " ";

    return 0;
}