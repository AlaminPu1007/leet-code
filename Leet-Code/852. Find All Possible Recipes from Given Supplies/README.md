# 2115. Find All Possible Recipes from Given Supplies

This problem involved about, you have information about n different recipes. You are given a string array recipes and a 2D string array ingredients. The ith recipe has the name `recipes[i]`, and you can create it if you have all the needed ingredients from `ingredients[i]`. A recipe can also be an ingredient for other recipes, i.e., `ingredients[i]` may contain a string that is in recipes.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/description)

**Approach :**<br/>

1. `Store Initial Supplies`

    - Use an `unordered_map (`can_cook`)` to track items we can directly use (`true` for available supplies).

2. `Create a Mapping of Recipes`

    - Use an `unordered_map (`recipe_idx`)` to store the index of each recipe in `recipes[]` for quick lookup.

3. `Depth-First Search (DFS) for Recipes`

    - Check if the `item` is already available in `can_cook`. If yes, return its status.
    - If `item` is `not a recipe`, return `false` (we can't cook it).
    - `Mark `item` as false temporarily` to detect circular dependencies (if a recipe depends on itself indirectly).
    - Recursively check if all its ingredients can be prepared.
    - If all ingredients are available, mark the `item` as cookable.

4. `Iterate Over Recipes and Apply DFS`
    - Start DFS for each recipe and add the successful ones to the result list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(R * I)` - O(R × I) (worst case: each recipe has all other recipes as ingredients)
-   Space-Complexity: `O(n + m)` - The solution uses several key data structures for its space requirements
