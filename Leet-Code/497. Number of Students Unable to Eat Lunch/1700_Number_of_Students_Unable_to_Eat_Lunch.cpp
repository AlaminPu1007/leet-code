#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int res = students.size();
        unordered_map<int,int>Map;

        for(auto item: students)
            Map[item]++;
        
        for(auto item: sandwiches)
        {
            if(Map[item])
            {
                Map[item]--;
                res--;
            }
            else return res;

        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {1,0,1,0};
    cout<<obj.countStudents(students,sandwiches)<<endl;
    return 0;
}