## 682. Baseball Game

[Problem link](https://leetcode.com/problems/baseball-game/)

**Approach :**<br>

- An integer `x` to Record a new score of `x`, by convert string to int using `stoi()` //c++ predefined method to convert string to int
  ```
  copy.push_back(operations[i]);
  ```
- `+` Record a new score that is the sum of the previous two scores

  ```
  num := stoi(copy[copy.size() - 1]), num2 = stoi(copy[copy.size() - 2])
  double_sum := num + num2
  string make_string := to_string(double_sum) // convert int to string by `to_string()`
  copy.push_back(make_string)
  ```

- `D` Record a new score that is the double of the previous score
  ```
  num := stoi(copy[copy.size() - 1]);
  double_value := num * 2;
  string make_string := to_string(double_value);
  copy.push_back(make_string);
  ```
- `C` Invalidate the previous score, removing it from the record.
  ```
  copy.pop_back();
  ```
- finally return total summation from new string, by convert it string to int

**Complexity :**<br>

- Time-Complexity: `O(n*m)`// n is the root string size, and m is the copy string size(each iteration of D, we are accessing of new string size by c++ size method)
- Space-ComplexityL `O(n)`
