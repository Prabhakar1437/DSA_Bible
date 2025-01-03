# Reverse a String GFG

You are given a string `s`, and your task is to reverse it. The reversed string should have all characters in the opposite order compared to the original string.

## Examples

1. **Input**: `s = "Geeks"`  
   **Output**: `skeeG`  

2. **Input**: `s = "for"`  
   **Output**: `rof`

3. **Input**: `s = "a"`  
   **Output**: `a` (No change since it's a single character)

---

### Constraints

- \(1 \leq s.size() \leq 10^6\): The string can be very large.
- `s` contains only alphabetic characters (both uppercase and lowercase).

---

### Approach to Solve

Reversing a string efficiently while considering the constraints is important. Let’s explore different ways to solve this problem:

#### 1. **Using Built-in Functions** (Best for simplicity)

- Most programming languages, including C++, provide built-in functions to reverse a string. 
- In C++, you can use the `std::reverse` function from `<algorithm>`.

**Steps**:
1. Use `std::reverse` to reverse the string in-place.
2. This approach is simple and optimal for most cases.

**Time Complexity**: \(O(n)\)  
**Space Complexity**: \(O(1)\)

---

#### 2. **Using Two-Pointer Technique** (Manual Reversal)

- Reverse the string by swapping characters from the start and end until you reach the middle.

**Steps**:
1. Initialize two pointers, one at the start (`i = 0`) and the other at the end (`j = s.size() - 1`).
2. Swap the characters at these two pointers and move them toward the center.
3. Stop when the pointers cross.

**Time Complexity**: \(O(n)\)  
**Space Complexity**: \(O(1)\)

---

#### 3. **Using a New String (Extra Space)**

- Create a new string and append characters from the original string in reverse order.

**Steps**:
1. Iterate through the original string from the end to the beginning.
2. Append each character to a new string.

**Time Complexity**: \(O(n)\)  
**Space Complexity**: \(O(n)\) (Extra space for the new string)

---

### C++ Implementation

#### Method 1: Using `std::reverse`

```cpp
#include <iostream>
#include <algorithm> // For std::reverse
#include <string> // For std::string

using namespace std;

string reverseString(string s) {
    // Reverse the string in-place
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string s = "Geeks";
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
```

---

#### Method 2: Using Two Pointers

```cpp
#include <iostream>
#include <string>

using namespace std;

string reverseString(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i], s[j]); // Swap characters at i and j
        i++;
        j--;
    }
    return s;
}

int main() {
    string s = "Geeks";
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
```

---

#### Method 3: Using a New String

```cpp
#include <iostream>
#include <string>

using namespace std;

string reverseString(const string& s) {
    string reversed = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        reversed += s[i]; // Append characters in reverse order
    }
    return reversed;
}

int main() {
    string s = "Geeks";
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
```

---

### Explanation of Code

#### Input

#### Using Two-Pointer Technique
`s = "Geeks"`

#### Using `std::reverse`:
1. Input string: `"Geeks"`
2. Reverse in-place: `"skeeG"`
3. Output: `"skeeG"`

#### Using Two-Pointer Technique
1. Initialize pointers: `i = 0`, `j = 4`.
2. Swap `s[0]` and `s[4]`: `"s" + "eekG"`
3. Move pointers: `i = 1`, `j = 3`.
4. Swap `s[1]` and `s[3]`: `"sk" + "eeG"`
5. Move pointers: `i = 2`, `j = 2` (stop).
6. Output: `"skeeG"`

#### Using New String

1. Iterate from the end (`i = 4`) to the beginning (`i = 0`).
2. Append each character to the new string: `"s" -> "sk" -> "skee" -> "skeeG"`
3. Output: `"skeeG"`

---

### Summary of Methods

| **Method**               | **Time Complexity** | **Space Complexity** | **Remarks**                    |
|---------------------------|---------------------|-----------------------|---------------------------------|
| Built-in `std::reverse`   | \(O(n)\)            | \(O(1)\)              | Best for simplicity            |
| Two-pointer technique     | \(O(n)\)            | \(O(1)\)              | Good for manual implementation |
| Using a new string        | \(O(n)\)            | \(O(n)\)              | Not optimal for large strings  |
