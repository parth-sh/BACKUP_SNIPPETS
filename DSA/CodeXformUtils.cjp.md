
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

// Absolute
#include <cmath>
abs(number)
fabs(floatNumber)
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

// Absolute
Math.abs(number)
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

# divmod, quotient = dividend / divisor; remainder = dividend % divisor;
quotient, remainder = divmod(dividend, divisor)
n, digit = divmod(n, 10)

# Absolute
abs(number)
```

</td>
</tr>
</table>


# Pairs
<table>
<tr>
<th>C++</th>
<th>Java</th>
<th>Python</th>
</tr>
<tr>
<td>

```cpp
// Declaration
#include <utility>
pair<int, string> myPair;
```

</td>
<td>

```java
// Declaration https://www.geeksforgeeks.org/creating-a-user-defined-printable-pair-class-in-java/
class pair {
    int first, second;
    pair(int first, int second)
    {
        this.first = first;
        this.second = second;
    }
    @Override public String toString()
    {
        return first + "," + second;
    }
}
pair p = new pair(i + 1, i + 2);
```

</td>
<td>

```python
# Declaration
my_pair = (1, "Apple")
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
// Length
str.length()

// Sorting
sort(str.begin(), str.end())

// Iterate
for (char ch : str)
```

</td>
<td>

```java
// Compare strings
boolean result = str1.equals(str2);

// Length
str.length();

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

// Sorting
char[] charArray = str.toCharArray();
Arrays.sort(charArray);
String sortedStr = new String(charArray);

// Iterate
for (char ch : str.toCharArray())
```

</td>
<td>

```python
# Length
len(str)

# Sorting
sorted_str = ''.join(sorted(str))

# Iterate
for ch in str:
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

// Sum
#include <numeric>
int sum = accumulate(vec.begin(), vec.end(), 0) // `0` is the initial sum value
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

// Sum
Arrays.stream(arr).sum()
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

# Sum
sum(arr[0: k])
```

```python
# Tuples in Python: Immutable and Hashable
var = ("Geeks", "for", "Geeks")
tuple_constructor = tuple(("dsa", "developement", "deep learning"))
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

// Remove
hashmap.erase("key");

// Sort by value in decreasing order
bool sortDesc(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}
sort(vec.begin(), vec.end(), sortDesc);

// TODO: Ordered HashMap
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

// Remove
hashMap.remove("key");

// Sort by value in decreasing order
// Its a complex process

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

# Remove
del hashMap["key"]

# Sort by value in decreasing order
hash = dict(sorted(hash.items(), key=lambda item: item[1], reverse=True))

# TODO: Ordered HashMap
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

// Remove
hashSet.erase(1)

// Iterate
for (const auto& item : my_set)

// TODO: Ordered set

// Set to List
vector<int> ans(st.begin(), st.end());
return ans;

// Clear
hashSet.clear()
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

// Remove
hashSet.remove(1);

// Iterate
for (String item : my_set)

// TODO: Ordered set

// Set to List
new ArrayList<>(hashSet);

// Clear
hashSet.clear();
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

# Remove
seen.remove(1)

# Iterate
for x in seen:

# Ordered Set
sorted_list = sorted(seen)

# Set to List
list(seen)

# Clear
seen.clear()
```

</td>
</tr>
</table>

# Stack
<table>
<tr>
<th>Stack in C++ STL</th>
<th>Stack in Java Collections</th>
<th>Stack in Python</th>
</tr>
<tr>
<td>

```cpp
// Declaration
#include <stack>
stack<int> myStack;

// Push
myStack.push(1)

// Pop
myStack.pop()

// isEmpty
myStack.empty()
```

</td>
<td>

```java
// Declaration
import java.util.Stack;
Stack<Integer> myStack = new Stack<>();

// Push
myStack.push(1)

// Pop
myStack.pop()

// isEmpty
myStack.empty()
```

</td>

<td>

```python
# Declaration
myStack = []

# Push
myStack.append(1)

# Pop
myStack.pop()

# isEmpty
if not myStack
if len(myStack) == 0:
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

sumation = sum(num for num in nums)

grades = [88, 92, 79, 85, 67]
all_passing = all(grade >= 65 for grade in grades) # Output: True

words = ["apple", "banana", "cherry"]
has_short_word = any(len(word) < 5 for word in words) # Output: False
```

</td>
</tr>
</table>