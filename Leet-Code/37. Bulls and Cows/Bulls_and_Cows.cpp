#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int freq_secret[10] = {0}, freq_guess[10] = {0}, bull = 0, cow = 0;
        for (int i = 0; secret[i] != '\0'; i++)
        {
            if (secret[i] == guess[i])
                bull++;

            else
            {
                freq_secret[secret[i] - '0']++;
                freq_guess[guess[i] - '0']++;
            }
        }

        for (int i = 0; i < 10; i++)
            cow += min(freq_secret[i], freq_guess[i]);

        string result = to_string(bull) + "A" + to_string(cow) + "B";
        return result;
    }
};

int main(void)
{
    Solution obj;
    string secret = "1807", guess = "7810";
    obj.getHint(secret, guess);
    return 0;
}