#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int res = k, left = 0;
        // initialize an hash-map to store key-value pairs
        // if we have fixed window then need this count of extra space
        int freq[26] = {0}, n = answerKey.size();

        // count frequency of first first window
        for (int i = 0; i < k; i++)
            freq[answerKey[i] - 'A']++;

        // iterate over the left element of array after first window
        for (int right = k; right < n; right++)
        {
            // count each element frequency
            freq[answerKey[right] - 'A']++;

            // any of item min-count is greater than window we need to removed it's frequency(presence no of time)
            // and also need to move left pointer by one, (19 -> T, 5 -> F)
            while (min(freq[19], freq[5]) > k)
            {
                freq[answerKey[left] - 'A']--;
                left++;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "TTFTTFTT";
    int k = 1;

    cout << obj.maxConsecutiveAnswers(s, k) << endl;
    return 0;
}