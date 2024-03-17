
# Short-circuit evaluation in Programming
https://www.geeksforgeeks.org/short-circuit-evaluation-in-programming/

# Basics
<table>
<tr>
<th>C++</th>
<th>Java</th>
<th>Python</th>
</tr>
<tr>
<td>

```cpp
// Integer Min max
#include <limits>
INT_MIN
INT_MAX

// To Int
(int)x
int a = ch - '0';

// ASCII code
(int)c

// Sqrt
#include <cmath>
sqrt(x);

// Max
max(a, b);
*max_element(arr, arr + n);

// Sum
accumulate(arr, arr + n, 0);

// Floor, Ceil
#include <cmath>
floor(num), ceil(num)
```

</td>
<td>

```java
// Integer Min max
Integer.MIN_VALUE
Integer.MAX_VALUE

// To Int
(int)x
int a = ch - '0';

// ASCII code
(int)c

// Sqrt
import java.lang.Math;
Math.sqrt(x);

// Max
Math.max(a, b);
Arrays.stream(arr).max()

// Sum
Arrays.stream(arr).sum();

// Floor, Ceil
Math.floor(num), Math.ceil(num)
```

</td>
<td>

```python
# Integer Min max
int(-(2**31))
int(2**31 - 1)

# To Int
int(x)

# ASCII code
ord(c)

# Integer Division
result = a // b

# Sqrt
import math
math.sqrt(x)

# Max
max(a, b)
max(arr)

# Sum
sum(arr)

# Decrementing Loop
for i in range(10, 0, -1):
    print(i)

# Floor, Ceil
import math
math.floor(4.2), math.ceil(4.2)
```

</td>
</tr>
</table>

# String
<table>
<tr>
<th>C++</th>
<th>Java</th>
<th>Python</th>
</tr>
<tr>
<td>

```cpp
```

</td>
<td>

```java

// Compare strings
boolean result = str1.equals(str2);

// String Length
int len = str.length();

// String toCharArray
String str = "jhgjhgjhgjh";
char[] arr = str.toCharArray();

// Char array to String
String.valueOf(arr);

// String to lower case
str.toLowerCase();

// Remove alphanumeric from string
str.replaceAll("[^a-zA-Z0-9]", "");

// Remove all white spaces from string
str.replaceAll("\\s+","");

// StringBuilder append , insert replace

// SubString
string.substring(start, end +1)
```

</td>
<td>

```python
```

</td>
</tr>
</table>


# Array
<table>
<tr>
<th>Static array in C++ STL</th>
<th>Static array in Java Collections</th>
</tr>
<tr>
<td>

```cpp
// Initialization
int arr[] = {1, 2, 3, 4, 5}; // Explicit initialization
int arr[5] = {1, 2, 3, 4, 5}; // With size specification
int arr[5]; // Default, uninitialized

// Array Fill
std::fill_n(arr, 5, 10); // Fill an array `arr` of size 5 with 10s.

// Length
int size = sizeof(arr) / sizeof(arr[0]);

// Looping
for(int i = 0; i < size; i++) {
    // Access each element as arr[i]
}

// Sorting
sort(arr, arr + 5);
```

</td>
<td>

```java
// Initialization
int[] arr = new int[]{1, 2, 3, 4, 5}; // Explicit initialization
int[] arr = {1, 2, 3, 4, 5}; // Shorthand syntax
int[] arr = new int[5]; // Default initialization with zeroes

// Array Fill
Arrays.fill(arr, 10); // Fill the array `arr` with 10s.

// Length
int size = arr.length;

// Looping
for(int i = 0; i < arr.length; i++) {
    // Access each element as arr[i]
}
for(int element : arr) {
    // Access each element as element
}

// Sorting
Arrays.sort(arr);
```

</td>
</tr>
</table>

# Dynamic Array
<table>
<tr>
<th>Vector in C++ STL</th>
<th>ArrayList in Java Collections</th>
<th>List in Python</th>
</tr>
<tr>
<td>

```cpp
// Initialization
#include <vector>
std::vector<int> vec = {1, 2, 3, 4, 5};

// Vector Fill
fill(vec.begin(), vec.end(), 10);

// Size
size_t size = vec.size();

// Looping
// Same as static array

// Append
vec.push_back(5);

// Sorting
sort(vec.begin(), vec.end());
```

</td>
<td>

```java
// Initialization
import java.util.ArrayList;
ArrayList<Integer> arrayList = new ArrayList<>();
List<Integer> list = List.of(1, 2, 3);

// List Fill
Collections.fill(list, 10);

// Size
int size = list.size();

// Looping
// Same as static array

// Append
list.add(5);

// Sorting
Collections.sort(list);
```

</td>
<td>

```python
# Initialization
arr = [1, 2, 3, 4, 5]

# List Fill
arr = [10] * 5 # Create a list of five 10s.
arr = [10 for _ in range(len(arr))] # Fill existing list with 10s

# Size
size = len(arr)

# Looping
for i in range(len(arr)):
    # Access each element as arr[i]
for element in arr:
    # Access each element as element

# Append
arr.append(5)

# Sorting
arr.sort()
sorted_arr = sorted(arr) # to get a sorted list without modifying the original
```

</td>
</tr>
</table>


# HashMap
<table>
<tr>
<th>HashMap in C++ STL</th>
<th>HashMap in Java Collections</th>
<th>HashMap in Python</th>
</tr>
<tr>
<td>

```cpp
// Declarartion
#include <map>
map<string, int> map;

// Key Check
if (mapName.find(key) != mapName.end()) {}

// Key-Value Addition
hashMap["key"] = 1;

// Inc. If Absent
map["key"] = map["key"] + 1;

// Iteration
for (auto it = map.begin(); it != map.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
}

for (const auto& pair : myMap) {
    std::cout << "Key: " << pair.first << std::endl;
}
```

</td>
<td>

```java
// Declarartion
import java.util.HashMap;
HashMap<String, Integer> map = new HashMap<>();

// Key Check
if (mapName.containsKey(key)) {}

// Key-Value Addition
hashMap.put("key", 1);

// Inc. If Absent
map.put("key", map.getOrDefault("key", 0) + 1);

// Iteration
for (HashMap.Entry<String, Integer> entry : map.entrySet()) {
    System.out.println(entry.getKey() + ": " + entry.getValue());
}

for (String key : myMap.keySet()) { // Iterating through the keys
    System.out.println("Key: " + key);
}

// TODO: Ordered HashMap
```

</td>

<td>

```python
# Declarartion
hash = {}
from typing import Dict # With specified types using type hints (Python 3.9+ for more specific types):
hash: Dict[str, int] = {}

# Key Check
if key in mapName:

# Key-Value Addition
hashmap["key"] = 1

# Inc. If Absent
dictionary["key"] = dictionary.get("key", 0) + 1
hash[cnt] = hash.get(cnt, []) + [i] # .append(i) modifies the list in place and returns None

# Iteration
for key, value in map.items():
    print(f"{key}: {value}")

for num in hash: # Iterating Through Dictionary Keys
    print(num)
```

</td>
</tr>
</table>


# HashSet
<table>
<tr>
<th>Set in C++ STL</th>
<th>HashSet in Java Collections</th>
<th>Set in Python</th>
</tr>
<tr>
<td>

```cpp
// Declaration
#include <set>
set<int> hashSet;

// Insert
hashSet.insert(1);

// Check if contains
hashSet.find(1) != hashSet.end()
```

</td>
<td>

```java
// Declaration
HashSet<Integer> hashSet = new HashSet<>();

// Insert
hashSet.add(1);

// Check if contains
hashSet.contains(1);
```

</td>

<td>

```python
# Declaration
seen = set()

# Insert
seen.add(1)

# Check if contains
contains = 1 in seen
```

</td>
</tr>
</table>

# Lazy Evaluation Techniques
TODO: See tutorial for below and document chaining iterators, filtering, and mapping, first start with java
<table>
<tr>
<th>Java Streams</th>
<th>Python: Generators, Iterator Tools, Generator Expressions</th>
</tr>
<tr>
<td>

```java
// Streams
Arrays.stream(nums).filter(num -> num <= target).count();
```

</td>

<td>

```python
# Generators // lazy-evaluating manner

# Iterator Tools

# Generator Expressions // Concise way to create generators
count = sum(1 for num in nums if num <= target)
```

</td>
</tr>
</table>