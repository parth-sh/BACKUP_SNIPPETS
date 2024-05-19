- HCF, Eculidian's Algorithm, Used when to find highest common factors
```cpp
// https://youtu.be/JUzYl1TYMcU
int gcd(int a, int b) {
    // b = a * q + r
    // r = b % a
    // a = b % a
    // b = a
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}
```

- LCM

- Iterating Over Adjacent Cells in a Grid
```cpp
vector<int> roww = {1, -1, 0, 0};
vector<int> coll = {0, 0, -1, 1};

for (int i = 0; i < 4; i++) {
    int newX = x + roww[i];
    int newY = y + coll[i];
    cout << grid[newX][newY];
}
```