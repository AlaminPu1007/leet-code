## 208. Implement Trie (Prefix Tree)

This problem involved about, a trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/implement-trie-prefix-tree/description/)

**Approach ::**<br/>

1. **Insert**: Traverse through each character of the word, creating new nodes if necessary, and mark the end node's flag as true.
2. **Search**: Traverse through each character of the word, returning false if any character is not found or if the end node's flag is false.
3. **StartsWith**: Traverse through each character of the prefix, returning false if any character is not found.

**Complexity Analysis :**<br/>

-   Time-Complexity :

    -   Insertion:` O(m)`, where m is the length of the word to be inserted.
    -   Search: `O(m)`, where m is the length of the word to be searched.
    -   StartsWith: `O(m)`, where m is the length of the prefix.

-   Space-Complexity : The space complexity of the trie is `O(n * m)`, where n is the number of words inserted and m is the average length of the words. This is because each character of each word needs to be stored in a node.

**References :**<br/>

-   [Learn from video tutorial](https://www.youtube.com/watch?v=dBGUmUQhjaM&list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp)
-   [Geek For Geeks](https://www.geeksforgeeks.org/trie-insert-and-search/)
-   [Blog](https://takeuforward.org/data-structure/implement-trie-1/)
