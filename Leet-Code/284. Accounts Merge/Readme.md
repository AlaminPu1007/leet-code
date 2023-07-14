## 721. Accounts Merge

This problem involved about, given a list of accounts where each element accounts[i] is a list of strings, where the first element `accounts[i][0]` is a name, and the rest of the elements are emails representing emails of the account. Now merge these accounts.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/accounts-merge/description/)

**Approach :**<br/>

-   First, we will create a map data structure. Then we will store each email with the respective index of the account(the email belongs to) in that map data structure.
-   While doing so, if we encounter an email again(i.e. If any index is previously assigned for the email), we will perform union( unionByRank()) of the current index and the previously assigned index.
-   After completing step 2, now it’s time to merge the accounts. For merging, we will iterate over all the emails individually and find the ultimate parent(using the findUPar() method) of the assigned index of every email. Then we will add the email of the current account to the index(account index) that is the ultimate parent. Thus the accounts will be merged
-   Finally, we will sort the emails for every account separately and store the final results in the answer array accordingly.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N+E) + O(E*4ɑ) + O(N*(ElogE + E))`- where N = no. of indices or nodes and E = no. of emails. The first term is for visiting all the emails. The second term is for merging the accounts. And the third term is for sorting the emails and storing them in the answer array.
-   Space-Complexity: `O(N)+ O(N) +O(2N) ~ O(N)`- where N = no. of nodes/indices. The first and second space is for the ‘mergedMail’ and the ‘ans’ array. The last term is for the parent and size array used inside the Disjoint set data structure.

**References :**<br/>

-   [Learn better and clear approach from take u forward blog](https://takeuforward.org/data-structure/accounts-merge-dsu-g-50/)
-   [Get helpful video tutorial](https://www.youtube.com/watch?v=FMwpt_aQOGw&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=50)
