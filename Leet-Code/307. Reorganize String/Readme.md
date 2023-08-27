## 767. Reorganize String

This problem involved about, given a string s, rearrange the characters of s so that any two adjacent characters are not the same.<br/>
Return any possible rearrangement of s or return "" if not possible.

# Problem description

For better problem description, please visit [Leetcode page](https://leetcode.com/problems/reorganize-string/description/)

**Approach :**<br/>

-   Create an unordered map (Map) to store the frequency of each character in the given string `s`.
-   Initialize a priority queue (pq) to store pairs of characters and their frequencies. Use a max-heap property, which ensures that the character with the highest frequency is at the top.
-   Iterate through the characters in the Map and insert each character and its frequency as a pair into the priority queue `(pq)`.
-   Initialize an empty string res to store the final reorganized string.
-   While the priority queue pq has more than one element:
    1. Extract the top two elements from the priority queue (pq), which represent the characters with the highest frequencies.
    2. Append both characters to the result string res
    3. Decrement the frequencies of these characters.
    4. If the frequency is still greater than zero for either character, push it back into the priority queue.
-   After the loop, if there's only one element left in the priority queue (pq), it should be a character with a frequency of 1. Append this character to the result string res.
-   Return the result string res if it's a valid reorganized string (i.e., no two adjacent characters are the same), otherwise return an empty string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - To store key value pairs in hash-table can take `O(n)` times, traverse through `heap(priority_queue)` can take `O(n)` times and push pair in it can take `O(log(n))`. The overall time complexity is `O(n*log(n))`
-   Space-Complexity: `O(n)` - `pq` has `O(n)` spaces, hash-map has `O(n)` spaces and our `res` also have `O(n)` spaces.
