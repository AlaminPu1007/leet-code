# 1002. Find Common Characters

Problem link: https://leetcode.com/problems/find-common-characters/

**Problem :**<br>
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.<br>

**Approach :**<br>
We need an two dimension array to store each words frequency(how many times repeat a character).<br>

```
//store the each words frequency

        for i = 0 to len - 1
           each_word_len := words[i].length;
            for j = 0 to each_word_len - 1
                freq[i][words[i][j] - 'a' ]++

```

Then, find the character that are present inside all words(string), with the minimum value<br>
and loop through that Minimum value, and push each character into our new vector string array(need to make each character to string ).<br>

```
for i = 0 to 26

    count := 0, Min := INT_MAX

    for j = 0 to len - 1
        if(freq[j][i])
            count++
            Min := min(Min, freq[j][i]);

    if(count == len)
        for(int k = 0 to Min-1
            ans.push_back(string(1, i + 'a'))

```

Finally return ans string array

```
return ans

```

**Complexity :**<br>
Time-Complexity: O(n^2)<br>
Space-Complexity: O(n)<br>
