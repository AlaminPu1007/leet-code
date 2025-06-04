#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findAllRecipes(vector<string> &recipes, vector<vector<string>> &ingredients, vector<string> &supplies)
    {
        unordered_map<string, bool> can_cook;

        for (auto item : supplies)
            can_cook[item] = true;

        unordered_map<string, int> recipe_idx;

        for (int i = 0; i < recipes.size(); i++)
            recipe_idx[recipes[i]] = i;

        vector<string> res;

        for (auto item : recipes)
        {
            if (dfs(item, can_cook, recipe_idx, ingredients))
                res.push_back(item);
        }

        return res;
    }

private:
    bool dfs(string item, unordered_map<string, bool> &can_cook, unordered_map<string, int> &recipe_idx, vector<vector<string>> &ingredients)
    {
        // handle the base case
        if (can_cook.find(item) != can_cook.end())
            return can_cook[item];

        // if item is not in the supplies and also not in recipe
        if (recipe_idx.find(item) == recipe_idx.end())
            return false;

        // initially mark it as a false to avoid circular dependency
        can_cook[item] = false;

        // iterate over the adjacency list of current item
        for (auto nei : ingredients[recipe_idx[item]])
        {
            if (!dfs(nei, can_cook, recipe_idx, ingredients))
                return false;
        }

        return can_cook[item] = true;
    }
};

int main(void)
{
    Solution obj;
    vector<string> recipes = {"bread", "sandwich", "burger"}, supplies = {"yeast", "flour", "meat"};
    vector<vector<string>> ingredients = {{"yeast", "flour"}, {"bread", "meat"}, {"sandwich", "meat", "bread"}};

    vector<string> res = obj.findAllRecipes(recipes, ingredients, supplies);

    for (auto item : res)
        cout << item << " ";

    return 0;
}