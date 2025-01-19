# 1233. Remove Sub-Folders from the Filesystem

This problem involved about, given a list of folders folder, return the folders after removing all sub-folders in those folders. You may return the answer in any order.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/description/)

**Approach :**<br/>

#### Key Idea:

1. `Using a Hash Set for Quick Lookup`: Store each folder path in an unordered set to allow quick access.
2. `Iterate Through Each Folder`: For each folder, iterate through its characters to find any potential parent folder path.
3. `Check for Substrings in Hash Set`: If a substring of a path (representing a potential parent) exists in the set, the current folder is a subfolder and is not added to the result list.
4. `Optimize by Breaking Early`: For each folder path, if a parent path is found, stop further checks for that path to improve efficiency.

**Algorithm :**<br/>

1. `Store Folders in a Set`: Insert all folder paths into an unordered set.
2. `Iterate through Folder Paths`: For each path in the folder list:
    - Add it to the result list.
    - Check each prefix substring to see if it exists in the set (indicating a parent path).
3. `Result Construction`: Only add paths to the result list that don’t have a parent path in the set.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m^2)` - where `n` is the number of folders, and `m` is the average length of each folder path. We check each character of each folder path.
-   Space-Complexity: `O(n )` - where `n` is the number of folders, due to the storage of folder paths in a set and result list.
