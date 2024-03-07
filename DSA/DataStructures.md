C++ STL is divided into 4 parts, 
Algorithms, 
Containers(Pair, Vector, Queues, Set, Map etc.), 
Functions, 
Iterators

# Pair: A utility that allows storing two heterogeneous objects as a single unit.
<table>
<tr>
<th>Pair in C++ STL</th>
<th>Pair in Java Collections</th>
<th>Pair in Python</th>
</tr>
<tr>
<td>

```cpp
#include <iostream>
#include <utility>
using namespace std;
void explainPair() {
    
    pair<int, int> p = {1, 3}; // O(1)

    cout << p.first << " " << p.second << endl; // O(1) // 1 3 

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // 1 3 4
    
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    
    cout << arr[1].second; // 5
}
```
  
</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>


# Vector: A container which is dynamic in nature
<table>
<tr>
<th>Vector in C++ STL</th>
<th>Vector in Java Collections</th>
<th>Vector in Python</th>
</tr>
<tr>
<td>

```cpp
#include <vector>

// Declaration
vector<int> v0 = {1,2,3,4,5}; // 1,2,3,4,5 // O(n)    
vector<int> v; // {} // O(1)
vector<int> v2(5, 100); // {100, 100, 100, 100, 100} // O(n)
vector<int> v3(5); // {0, 0, 0, 0, 0} // O(n)
vector<int> v4(5, 20); // {20, 20, 20, 20, 20} // O(n)
vector<int> v5(v4); // {20, 20, 20, 20, 20} // O(n)


// Insertion
v.push_back(1); // {1} // Amortized O(1)
v.emplace_back(2); // {1,2} // Amortized O(1)

vector<pair<int, int>> vec; // {} // O(1)
vec.push_back({1, 2}); // {{1, 2}} // Amortized O(1)
vec.emplace_back(1,2); // {{1, 2}, {1, 2}} // Amortized O(1)

vector<int> v7(2, 100); // 100 100 // O(n)
v7.insert(v7.begin(), 300); // 300 100 100 // O(n)
v7.insert(v7.begin() + 1, 2, 10); // 300 10 10 100 100 // O(n)

vector<int> v8(2, 50); // O(n)
v7.insert(v7.begin(), v8.begin(), v8.end()); // 50 50 300 10 10 100 100 // O(n) + O(m) where m is size of the inserted range
    
    
// Iterator
vector<int> v6 = {20, 10, 15, 6, 7}; // O(n)

vector<int>::iterator it = v6.begin(); // O(1)
it++; // O(1)
cout << *(it) << endl; // 10 // O(1)

it = it + 2; // O(1)
cout << *(it) << endl; // 6 // O(1)

it = v6.end(); // O(1)
cout << *(it) << endl; // undefined behavior, accessing end() directly is not safe
    

// Indexing
cout << v6[0] << " " << v6.at(1) << endl; // 20 10 // O(1), O(1) with bounds check
cout << v6.back() << " " << v6.front() << endl; // 7 20 // O(1), O(1)
    

// Looping
for(int i=0;i<v6.size(); i++) { // O(n)
    cout << v6[i] << " "; // 20 10 15 6 7 // O(1) inside loop
}
for(vector<int>::iterator it = v6.begin(); it != v6.end(); it++) { // O(n)
    cout << *(it) << " "; // 20 10 15 6 7 // O(1) inside loop
}
for(auto it = v6.begin(); it != v6.end(); it++) { // O(n)
    cout << *(it) << " "; // 20 10 15 6 7 // O(1) inside loop
}
for(auto x: v6) { // O(n)
    cout << x << " "; // 20 10 15 6 7 // O(1) inside loop
}


// Deletion
v6.erase(v6.begin() + 1); // 20 15 6 7 // O(n)
v6 = {10, 20, 30, 40, 50}; // O(n)
v6.erase(v6.begin() + 2, v6.begin() + 4); // 10, 20, 50 // O(n)
    

// Extras
v7.size(); // O(1)

v7.pop_back(); // O(1)

v8.swap(v7); // O(1)

v7.clear(); // O(n)

cout << v7.empty() << endl; // 1 // O(1)

vector<int> v9 = {v0.begin(), v0.end() - 2}; // 1 2 3 4 // O(n)

vector<int>::iterator it2 = find(v9.begin(), v9.end(), 5); // O(n)
cout << (it2 == v9.end()) << endl; // 1 // O(1)
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# List: A container which is dynamic in nature, and also gives front operations
<table>
<tr>
<th>List in C++ STL</th>
<th>List in Java Collections</th>
<th>List in Python</th>
</tr>
<tr>
<td>
Insert at front in vector is costlier
Internally doubly linked list is maintained for a list
while a singly linked list for vector

```cpp
#include <iostream>
#include <list>
using namespace std;
void explainList() {
    list<int> ls; // {} // O(1)

    ls.push_back(2); // {2} // O(1)
    ls.emplace_back(4); // {2, 4} // O(1)

    ls.push_front(5); // {5, 2, 4} // O(1)
    ls.emplace_front(3); // {3, 5, 2, 4} // O(1)

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Deque: It is exactly same to list and vector.
<table>
<tr>
<th>Deque in C++ STL</th>
<th>Deque in Java Collections</th>
<th>Deque in Python</th>
</tr>
<tr>
<td>

```cpp
#include <iostream>
#include <deque>
using namespace std;
void explainDeque() {
    deque<int> dq; // {} // O(1)

    dq.push_back(1); // 1 // Amortized O(1)
    dq.emplace_back(2); // 1 2 // Amortized O(1)
    dq.push_front(4); // 4 1 2 // Amortized O(1)
    dq.emplace_front(3); // 3 4 1 2 // Amortized O(1)

    dq.pop_back(); // 3 4 1 // Amortized O(1)
    dq.pop_front(); // 4 1 // Amortized O(1)

    cout << dq.back() << endl; // 1 // O(1)
    cout << dq.front() << endl; // 4 // O(1)
    
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Stack: LIFO Container
<table>
<tr>
<th>Stack in C++ STL</th>
<th>Stack in Java Collections</th>
<th>Stack in Python</th>
</tr>
<tr>
<td>

```cpp
#include <iostream>
#include <stack>
using namespace std;
void iterate(stack<int> st) {
    while(!st.empty()) { // 5 3 3 2 1 
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
void explainStack() {
    stack<int> st;
    st.push(1); // O(1)
    st.push(2); // O(1)
    st.push(3); // O(1)
    st.push(3); // O(1)
    st.emplace(5); // O(1)
    
    iterate(st);
    
    cout << st.top() << endl; // 5 // O(1)
    
    st.pop(); // O(1)
    
    cout << st.top() << endl; // 3 // O(1)
    
    st.pop(); // O(1)
    
    st.size(); // O(1)
    
    st.empty(); // 0 // O(1)
    
    stack<int> st2;
    st.swap(st2); // O(1)
    
    st.size(); // O(1)

    // Search Operation O(N)
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Queue: FIFO Container
<table>
<tr>
<th>Queue in C++ STL</th>
<th>Queue in Java Collections</th>
<th>Queue in Python</th>
</tr>
<tr>
<td>

```cpp
#include <iostream>
#include <queue>
using namespace std;
void iterate(queue<int> q) {
    while(!q.empty()) { // 1 2 4 // O(n)
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void explainQueue() {
    queue<int> q;
    q.push(1); // 1 // O(1)
    q.push(2); // 1 2 // O(1)
    q.emplace(4); // 1 2 4 // O(1)
    
    iterate(q);
    
    q.back() += 4; // 8 // O(1)
    
    cout << q.back() << endl; // 8
    
    cout << q.front() << endl; // 1
    
    q.pop(); // 1
    
    cout << q.front() << endl; // 2

    // size, swap same as stack
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Priority Queue: The largest element stays at the top
<table>
<tr>
<th>Priority Queue in C++ STL</th>
<th>Priority Queue in Java Collections</th>
<th>Priority Queue in Python</th>
</tr>
<tr>
<td>

```cpp
#include <iostream>
#include <queue>
using namespace std;
void explainPQ() {
    priority_queue<int> pq; // O(N) heapify
    
    pq.push(5); // {5} // O(logN)
    pq.push(2); // {5, 2} // O(logN)
    pq.push(8); // {8, 5, 2} // O(logN)
    pq.emplace(10); // {10, 8, 5, 2} // O(logN)
    
    cout << pq.top() << endl; // 10 // O(1)
    
    pq.pop(); // {8, 5, 2} // O(logN)
    
    cout << pq.top() << endl; // 8 // O(1)
    
    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> mpq; // O(N) heapify
    mpq.push(5); // {5} // O(logN)
    mpq.push(2); // {2, 5} // O(logN)
    mpq.push(8); // {2, 5, 8} // O(logN)
    mpq.push(10); // {2, 5, 8, 10} // O(logN)
    
    cout << mpq.top() << endl; // 2 // O(1)
}
```

</td>
<td>

```java

```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Set
<table>
<tr>
<th>Set in C++ STL</th>
<th>HashSet in Java Collections</th>
<th>Set in Python</th>
</tr>
<tr>
<td>

Set: Sorted, Unique, Implementation of Self Balancing BST | Red-Black Tree
```cpp
#include <iostream>
#include <set>
using namespace std;
void iterate(const set<int> &s) {
    for(int i: s) {
        cout << i << ' ';
    }cout << endl;
}
void explainSet() {
    set<int> st;
    st.insert(1); // {1} // O(logN)
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    
    // Functionality of insert in vector can be used also, that only increases efficiency
    
    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of above.
    
    auto it = st.find(3); // O(logN)
    
    st.erase(5); // O(logN)
    
    int cnt = st.count(1); // 1
    
    it = st.find(3);
    st.erase(it);
    
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // O(logN)
    
    set<int> t_set_new(st); // copy constructor
    
    iterate(st);
    it = st.lower_bound(2); // 4
    it = st.upper_bound(3); // 4
}
```
MultiSet: Sorted, Not-Unique
```cpp
#include <iostream>
#include <set>
using namespace std;
void iterate(const multiset<int> &ms) {
    for(int i: ms) {
        cout << i << ' ';
    }cout << endl;
}
void explainMultiSet() {
    multiset<int> ms;
    
    ms.insert(1); // {1} // O(logN)
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    
    ms.erase(1); // {} // O(N)
    
    int cnt = ms.count(1); // O(logN)
    
    ms.erase(ms.find(1)); // O(logN)
    // ms.erase(ms.find(1), ms.find(1) + 2);
}
```
Unordered_Set: Not Sorted, Unique, Implementation of hashTable
```cpp
Search Time: O(1) --> Average
            O(N) --> Worst

Insertion Time: Same as Search
Deletion TIme: Same as Search
```

</td>
<td>

```java
HashSet<Integer> hash = new HashSet<>();
Hash_Set.add(Object element)
Hash_Set.contains(Object element)
```

</td>

<td>

```python

```

</td>
</tr>
</table>

# Map
<table>
<tr>
<th>Map in C++ STL</th>
<th>HashMap in Java Collections</th>
<th>Map in Python</th>
</tr>
<tr>
<td>

Map: Store unique key in sorted order, Implementation: Self Balancing BST like Red-Black Tree
```cpp
#include <iostream>
#include <map>
#include <utility>
using namespace std;
void explainMap() {
    map <int, int> mpp;
    
    map<int, pair<int, int>> mpp2;

    map<pair<int, int>, int> mpp3;

    mpp[1]= 2;

    mpp.insert ({3, 1}); // O(logN)

    mpp3[{2,3}] = 10;

    for (auto it: mpp) {
        cout << it.first << " " << it.second << endl;   
    }
    
    mpp.erase(21);

    cout << mpp[1] << mpp[5]; // O(logN)

    auto it = mpp.find(2);
    cout << (*it).second;
    
    auto it2 = mpp.find(5); // ---> mpp.end()

    mpp.clear(); // O(logN)
}
```

Unorderd Map: Unique Keys, Implementation: Hash Tables
```cpp
Search Time --> O(1) --> Average    
                O(N) --> Worst Case

Insertion Time --> Same as Search

Deletion Time --> Same as Search
```

</td>
<td>

```java
```

</td>

<td>

```python
```

</td>
</tr>
</table>


# Algos

<table>
<tr>
<th>Common Algo's C++ STL</th>
<th>Common Algo's Java Collections</th>
<th>Common Algo's Python</th>
</tr>
<tr>
<td>

```cpp

#include <algorithm> // reverse, sort

// Sorting array
sort(a, a + n); // O(NlogN)

// Sorting Vector
sort(v.begin(), v.end());

// Reverse Vector
reverse(v6.begin(), v6.end()); // 50 20 10 // O(n)

sort(a + 2, a + 4);

sort(a, a+n, greater<int>);

// Sort a composite array
pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

// Sort it according to second element if same, then sort acc. to the first element but in descending order
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) 
        return true;
    if(p1.second > p2.second) 
        return false;

    // If the second elements are equal, then compare by the first element in descending order
    if(p1.first > p2.first) {
        return true;
    }
    return false;
}
sort(a, a+n, comp);

// Next Permutation
String s = "123";
do {
    cout << s << endl;
} while(next_permutation(s.begin(), s.end()));

// Max Element in an array
int maxi = *(max_element(a, a+n));
```

</td>
<td>

```java
```

</td>

<td>

```python
```

</td>
</tr>
</table>
