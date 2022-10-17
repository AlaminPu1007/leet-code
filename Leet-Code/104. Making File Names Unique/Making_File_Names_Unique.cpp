#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        int len = names.size();
        //unordered_map to find a string it will take only O(1) time.... But for map it will take O(logn) time
        unordered_map<string,int>Map;
        
        for(int i = 0; i < len; i++)
        {
            auto item = Map.find(names[i]);
            // if the name already came
            if(item != Map.end())
            {
                // it contains the number in brackets
                int k = Map[names[i]];
                
                while(Map.find(names[i]+"("+to_string(k)+")") != Map.end())
                {
                    // Increase number until that didn't exist
                    k++;
                    //mean while update in the map too
                    Map[names[i]]++;
                }
                // Recently we will use one more number so increment
                 Map[names[i]]++;
                 // update root names value
                 names[i] = names[i]+"("+to_string(k)+")";
            }
            // Here we are storing  for example ...abc(1)=1 and abc(2)=1 it means abc(1) occcured one time, and abc=2 it means abc occured 2 times.
			/*
			Suppose you have a file named ABC occurring twice, we will store ABC with occurrence =2 and ABC(1) with occurrence =1... It helps when we get another file with name ABC(1) we can store like ABC(1)(1)
			*/
			Map[names[i]] = 1;
        }
        return names;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"gta","gta(1)","gta","avalon"};
    vector<string> res = obj.getFolderNames(str);
    
    int res_len = res.size();
    for(int i = 0; i < res_len; i++)
    cout<<res[i]<<" ";
    return 0;
}