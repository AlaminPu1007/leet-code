## 1980. Find Unique Binary String

This problem involved about, given an array of strings `nums` containing `n` unique binary strings each of length `n`, return a binary string of length n that does not appear in `nums`. If there are multiple answers, you may return any of them.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-unique-binary-string/description)

**Approach :**<br/>

The solution involves trying all possible binary strings of length n where n is the size of the input vector nums. The findDifferentBinaryString function inserts each binary string from nums into an unordered set st and then calls the recursive function get_content to generate a new binary string that is not in st. The get_content function recursively tries adding '0' and '1' to the current binary string and checks whether the resulting string is in st. If not, it returns the current string.

**Algorithm :**<br/>

1. Initialize an unordered set st to store the binary strings from nums.
2. Insert each binary string from nums into st.
3. Call the get_content function to generate a binary string that is not in st.
4. The get_content function is a recursive function that takes a current binary string cur as an argument.
5. If the length of cur is equal to n (the size of nums), check whether it is in st. If not, return cur.
6. Otherwise, recursively call the function with '0' appended to cur and then with '1' appended to cur.
   7.If a non-empty string is obtained from the recursive calls, return it. Otherwise, return an empty string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - Due to the optimization, we check `O(n)` binary strings in our recursion. At each call, we perform some string concatenation operations, which costs up to `O(n)` (unless you have mutable strings like in C++).

-   Time-Complexity: `O(n)` - The recursion call stack when generating strings grows to a size of `O(n)`. The hash set uses `O(n)` space.
