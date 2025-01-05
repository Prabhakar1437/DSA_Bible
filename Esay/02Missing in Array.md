
# Missing in Array GFG

Problem Explanation:

You are provided with an array of size \( n-1 \) that contains distinct integers ranging from \( 1 \) to \( n \). This array represents a permutation of integers from \( 1 \) to \( n \), but one element is missing. The task is to identify and return the missing element.

---

## Key Insights

1. The integers in the array are distinct and within the range \( 1 \) to \( n \).
2. If all integers from \( 1 \) to \( n \) were present, their sum would be \( S = \frac{n(n+1)}{2} \).
3. By summing up the elements of the given array and subtracting it from \( S \), the missing element can be found.

---

### Approaches to Solve the Problem

#### **1. Sum Formula Approach (Efficient)**
- **Time Complexity**: \( O(n) \)
- **Space Complexity**: \( O(1) \)

**Steps:**
1. Calculate the sum of numbers from \( 1 \) to \( n \) using the formula \( S = \frac{n(n+1)}{2} \).
2. Calculate the sum of elements in the array, \( \text{sum\_arr} \).
3. Subtract \( \text{sum\_arr} \) from \( S \) to get the missing number.

**Code:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int>& arr, int n) {
    int total = n * (n + 1) / 2; // Sum of numbers from 1 to n
    int sum_arr = 0;
    for (int num : arr) {
        sum_arr += num;
    }
    return total - sum_arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int n = 5; // Total numbers from 1 to n
    cout << "Missing number: " << findMissingElement(arr, n) << endl;
    return 0;
}
```

---

#### **2. XOR Approach**
- **Time Complexity**: \( O(n) \)
- **Space Complexity**: \( O(1) \)

**Idea:**
1. The XOR of a number with itself is \( 0 \) (i.e., \( x \oplus x = 0 \)).
2. The XOR of any number with \( 0 \) is the number itself (i.e., \( x \oplus 0 = x \)).
3. XOR all numbers from \( 1 \) to \( n \) and XOR all elements of the array.
4. The remaining value will be the missing number.

**Code:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int>& arr, int n) {
    int xor_all = 0, xor_arr = 0;

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor_all ^= i;
    }

    // XOR all elements in the array
    for (int num : arr) {
        xor_arr ^= num;
    }

    // Missing number is XOR of these two results
    return xor_all ^ xor_arr;
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int n = 8; // Total numbers from 1 to n
    cout << "Missing number: " << findMissingElement(arr, n) << endl;
    return 0;
}
```

---

#### **3. Sorting Approach**
- **Time Complexity**: \( O(n \log n) \) (due to sorting)
- **Space Complexity**: \( O(1) \)

**Steps:**
1. Sort the array.
2. Iterate through the sorted array and check if the difference between consecutive elements is greater than \( 1 \).
3. The missing number is the one that breaks the sequence.

**Code:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMissingElement(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end()); // Sort the array

    // Check for the missing number
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != i + 1) {
            return i + 1; // Missing number
        }
    }
    return n; // If the last number is missing
}

int main() {
    vector<int> arr = {1};
    int n = 2; // Total numbers from 1 to n
    cout << "Missing number: " << findMissingElement(arr, n) << endl;
    return 0;
}
```

---

#### **4. Hashing Approach**
- **Time Complexity**: \( O(n) \)
- **Space Complexity**: \( O(n) \)

**Steps:**
1. Create a boolean array of size \( n+1 \) initialized to `false`.
2. Mark the presence of elements in the array.
3. Traverse the boolean array to find the unmarked index, which is the missing number.

**Code:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int>& arr, int n) {
    vector<bool> present(n + 1, false);

    // Mark presence of elements
    for (int num : arr) {
        present[num] = true;
    }

    // Find the missing number
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }
    return -1; // This should not happen
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int n = 8; // Total numbers from 1 to n
    cout << "Missing number: " << findMissingElement(arr, n) << endl;
    return 0;
}
```

---

### Comparison of Approaches:

| **Approach**           | **Time Complexity** | **Space Complexity** | **Remarks**                       |
|-------------------------|---------------------|-----------------------|-----------------------------------|
| Sum Formula            | \( O(n) \)         | \( O(1) \)           | Best for simplicity and efficiency. |
| XOR                   | \( O(n) \)         | \( O(1) \)           | Efficient and avoids integer overflow. |
| Sorting               | \( O(n \log n) \)  | \( O(1) \)           | Less efficient due to sorting.   |
| Hashing               | \( O(n) \)         | \( O(n) \)           | Requires additional space.       |

The **Sum Formula Approach** is generally the most efficient and straightforward to implement for this problem. If integer overflow is a concern, the **XOR Approach** is a better alternative.