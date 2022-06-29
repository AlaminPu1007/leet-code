#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int hay_len = haystack.length(), need_len = needle.length(), j = 0;

        // if needle is empty string
        if (!need_len)
            return 0;

        for (int i = 0; i < hay_len; i++)
        {
            for (j = 0; j < need_len; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;
            }
            cout << j << need_len << endl;
            if (j == need_len)
                return i;
                }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    string haystack = "hello", needle = "ll";

    obj.strStr(haystack, needle);

    return 0;
}