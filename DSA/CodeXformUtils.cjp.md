
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
int x = (int)ch - 48;
int x = ch - '0';
int x = ch; // narrowing on C

// Int to Float
float myFloat = myInt * 1.0f;

// To String
to_string(num)

// ASCII code
(int)c

// Float Division
float ans = (float)a / (float)b;

// Sqrt
#include <cmath>
sqrt(x);

// Max
max(a, b);
max({a, b, c});// max of 3 numbers 
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

// Object Check
// C++ doesn't have a built-in notion of object identity in the same way as Java and Python, 
// because it doesn't have garbage-collected objects or a universal object superclass. 
// However, you can check if two pointers or references refer to 
// the same memory address, which is effectively checking 
// if they are the same object:
MyClass obj1;
MyClass obj2;
MyClass* ptr1 = &obj1;
MyClass* ptr2 = &obj1;

if (ptr1 == ptr2) {
    // ptr1 and ptr2 point to the same object
}

// Pow
#include <cmath>
pow(base, exponent);


// Template
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 7;
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

// Int to Float
float myFloat = myInt * 1.0f;

// To String
Integer.toString(num);

// ASCII code
(int)c

// Sqrt
import java.lang.Math;
Math.sqrt(x);

// Max
Math.max(a, b);
Math.max(Math.max(a, b), c);
Arrays.stream(arr).max()

// Sum
Arrays.stream(arr).sum();

// Floor, Ceil
Math.floor(num), Math.ceil(num)

// Absolute
Math.abs(number)

// Object Check
MyClass obj1 = new MyClass();
MyClass obj2 = new MyClass();
MyClass obj3 = obj1;

obj1 == obj2 // false

obj1 == obj3 // true

// Pow
Math.pow(base, exponent);
```

</td>
<td>

```python
# Integer Min max
int(-(2**31))
int(2**31 - 1)

# To Int
int(x)

# Int to Float
my_float = my_int * 1.0

# To String
str(num)

# ASCII code
ord(c)

# Integer Division
result = a // b

# Sqrt
import math
math.sqrt(x)

# Max
max(a, b)
max(a, b, c)
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

# Object Check
obj1 = MyClass()
obj2 = MyClass()
obj3 = obj1

if obj1 is obj2: # false
if obj1 is obj3: # true

# Pow
pow(base, exponent)
```

</td>
</tr>
</table>


# Constructors
<table>
<tr>
<th>C++</th>
<th>Java</th>
<th>Python</th>
</tr>
<tr>
<td>

```cpp
class Example {
    int value;
    vector<vector<int>> matrix;

public:
    // Example(int val, int size) {
    //     value = val;
    //     matrix.resize(size);
    //     for (auto &row : matrix) {
    //         row.resize(size, 0);
    //     }
    // }
    Example(int val, int size) : value(val), matrix(size, vector<int>(size, 0)) {}
};
```

</td>
<td>

```java
public class Example {
    int value;
    List<Integer> numbers;

    public Example(int val, List<Integer> nums) {
        this.value = val;
        this.numbers = new ArrayList<>(nums);
    }
}
```

</td>
<td>

```python
class Example:
    def __init__(self, val, nums):
        self.value = val
        self.numbers = nums.copy()  # Assuming nums is a list, .copy() ensures a new list is created
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
// Declaration
string str = "Hello, World!";

// Length
str.length()

// Sorting
sort(str.begin(), str.end())

// Iterate
for (char ch : str)

// SubString
str.substr(start_index, length);
```

</td>
<td>

```java
// Declaration
String str1 = "Hello, World!";

// Compare strings
boolean result = str1.equals(str2);

// Length
str.length();

// Sorting
char[] charArray = str.toCharArray();
Arrays.sort(charArray);
String sortedStr = new String(charArray);

// Iterate
for (char ch : str.toCharArray())

// SubString
string.substring(startIndex, endIndex);

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


```

</td>
<td>

```python
# Declaration
str_var = "Hello, World!"

# Length
len(str_var)

# Sorting
sorted_str = ''.join(sorted(str_var))

# Iterate
for ch in str_var:

# SubString
str_var[start_index:end_index]
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
vector<int> adjacencyList[N]; // Array of N vectors for adjacency list

// Array Fill
#include <algorithm>
fill_n(arr, 5, 10); // Fill an array `arr` of size 5 with 10s.
#include <numeric>
iota(arr, arr + 5, 10); // 10 11 12 13 14

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
// Variable Initialization
#include <vector>
vector<int> vec = {1, 2, 3, 4, 5};
vector<int> indeg(n, 0);

vector<vector<int>> vec_2d(3);
for (int i = 0; i < 3; i++)
    vec_2d[i].resize(4);

vector<vector<int>> vec_2d_initialized(rows, vector<int>(cols, 0));

adjMatrix.resize(numVertices, vector<int>(numVertices, 0));


// SubList creation / Vector copy initialization
vector<int> sublist(v.begin(), v.begin() + idx + 1); // 0 to idx
vector<int> sublist(v.begin() + idx + 1, v.end());  // idx + 1 to n

vector<int> sublist;
sublist.assign(v.begin() + 1, v.end() - 1)); // 1 to n - 2

// Vector Fill
#include <algorithm>
fill(visited.begin(), visited.end(), false);
memset(&abc[0], 0, sizeof(int) * abc.size());
#include <numeric>
iota(parent.begin(), parent.end(), 0); // 0 1 2 ..

// Resize
vec.resize(newSize, 0);

// Size
size_t size = vec.size();

// Looping
// Same as static array

// Append
vec.push_back(5);

// Sorting
sort(vec.begin(), vec.end());
sort(vec.begin(), vec.end(), greater<int>()); // descending order

// Sum
#include <numeric>
int sum = accumulate(vec.begin(), vec.end(), 0) // `0` is the initial sum value

// Reverse
reverse(vec.begin(), vec.end());

// Delete Element
vec.erase(vec.begin() + index);

// Access Element
vec.at(index) // Bounds checking
vec[index] // No bounds checking

// Max Element
*max_element(vec.begin(), vec.end());
```

</td>
<td>

```java
// Variable Initialization
import java.util.ArrayList;
ArrayList<Integer> arrayList = new ArrayList<>();
List<Integer> list = List.of(1, 2, 3);

// SubList creation
List<Integer> sublist = original.subList(1, 4);

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
Collections.sort(list, Collections.reverseOrder());

// Sum
Arrays.stream(arr).sum()

// Reverse
Collections.reverse(list);

// Delete Element
list.remove(index);

// Max Element
Collections.max(list);
```

</td>
<td>

```python
# Variable Initialization
arr = [1, 2, 3, 4, 5]

# SubList Creation
sublist = original[1:4]

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
vec.sort(reverse=True)

# Sum
sum(arr[0: k])

# Reverse
arr.reverse()

# Delete Element
arr.pop(index)

# Max Element
max(arr)
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
#include <unordered_map>
unordered_map<char, int> ump = {{'I', 1}, {'V', 5}};

// Key Check
if (ump.find(key) != ump.end()) {}

// Key-Value Addition
ump["key"] = 1;

// Inc. If Absent
ump["key"] = ump["key"] + 1;

// Iteration
for (auto it = ump.begin(); it != ump.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
}

for (const auto& pair : ump) {
    cout << "Key: " << pair.first << endl;
}

// Remove
ump.erase("key");

// Sort by value in decreasing order 
/* Convert the hashmap to a vector of pairs, Sort the vector by value using the custom comparator function */
bool sortDesc(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}
vector<pair<string, int>> vec(ump.begin(), ump.end());
sort(vec.begin(), vec.end(), sortDesc);

// TODO: Ordered HashMap

// Size
ump.size();

// Clear
ump.clear();
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

// Size
hashMap.size();

// Clear
hashMap.clear();
```

</td>

<td>

```python
# Declarartion
hash = {}
from typing import Dict # With specified types using type hints (Python 3.9+ for more specific types):
hash: Dict[str, int] = {}
matches = {"{": "}", "[": "]", "(": ")"}

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

# Size
len(hashMap)

# Clear
hashMap.clear()
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
#include <unordered_set>
unordered_set<int> hashSet;
unordered_set<string> wordSet(words.begin(), words.end());

// Insert
hashSet.insert(1);
wordSet.insert(wordDict.begin(), wordDict.end()); // Initialize separately

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
stack<int> stk;

// Push
stk.push(1)

// Pop
stk.pop()

// isEmpty
stk.empty()

// Top
stk.top()
```

</td>
<td>

```java
// Declaration
import java.util.Stack;
Stack<Integer> stack = new Stack<>();

// Push
stack.push(1)

// Pop
stack.pop()

// isEmpty
stack.empty()

// Top
stack.peek()
```

</td>

<td>

```python
# Declaration
stack = []

# Push
stack.append(1)

# Pop
stack.pop()

# isEmpty
if not stack
if len(stack) == 0:

# Top
stack[-1]
```

</td>
</tr>
</table>

# Queue
<table>
<tr>
<th>Queue in C++ STL</th>
<th>Queue in Java Collections</th>
<th>Queue in Python</th>
</tr>
<tr>
<td>

```cpp
// Declaration
queue<int> q;

// Push
q.push(1);

// isEmpty
q.empty()

// Peek
q.front()

// Pop
q.pop()

// Size
q.size()
```

</td>
<td>

```java
// Declaration
Queue<Integer> q = new LinkedList<>();

// Push
q.add(1);

// isEmpty
q.isEmpty()

// Peek
q.peek()

// Pop
q.remove()

// Size
q.size()
```

</td>

<td>

```python
# Implementation using list
# Declaration
queue = []

# Push
queue.append('a')

# isEmpty
len(queue) == 0
not queue

# Peek
queue[0]

# Pop
queue.pop(0)

# Size
len(q)

# Implementation using queue.Queue
# Declaration
from queue import Queue
q = Queue()

# Push
q.put(1)

# isEmpty
q.empty()

# Front
q.queue[0]

# Pop
q.get()

# Size
q.qsize()
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

# Priority Queue(Min Heap, Max Heap)
<table>
<tr>
<th>Priority Queue in C++ STL</th>
<th>Priority Queue in Java Collections</th>
<th>HeapQ in Python</th>
</tr>
<tr>
<td>

```cpp
#include <queue>

// Declaration
priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> minHeap;

// Push
pq.push(10);

// isEmpty
pq.empty()

// Peek
pq.top()

// Pop
pq.pop()

// Size
pq.size()

// Iterate by popping all elements
while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
}
```

</td>
<td>

```java
import java.util.PriorityQueue;

// Declaration
PriorityQueue<Integer> pq = new PriorityQueue<>();
PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Comparator.reverseOrder());

// Push
pq.add(10);

// isEmpty
pq.isEmpty();

// Peek
pq.peek();

// Pop
pq.poll();

// Size
pq.size();

// Iterating with iterator
for (Integer value : pq) {
    System.out.println(value);
}

// Iterating by polling
while (!pq.isEmpty()) {
    System.out.println(pq.poll());
}
```

</td>

<td>

```python
import heapq

# Declaration
pq = []

# Push
heapq.heappush(pq, 10)
# Insert a negated value to simulate max heap behavior
heapq.heappush(maxHeap, -val)

# isEmpty (Not a direct function, so using len())
len(pq) == 0

# Peek (Directly access the smallest item)
pq[0] if pq else 'Heap is empty'
# Peek at the max element without removing
-maxHeap[0]

# Pop
heapq.heappop(pq)
# Retrieve the original value by negating again
-heapq.heappop(maxHeap)

# Size (Using len() function for list)
len(pq)

# Iterating by removing elements
while not pq.empty():
    print(pq.get())
```

</td>
</tr>
</table>