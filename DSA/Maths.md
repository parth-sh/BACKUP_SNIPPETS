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

Information to be detailed.

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

- Roman Numbers
```cpp
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// Combining Symbols:
// Symbols are generally placed in descending order from left to right.
// When smaller symbols precede larger symbols, they are subtracted (e.g., IV = 4).
// When smaller symbols follow larger symbols, they are added (e.g., VI = 6).

// Repetition Rules:
// The same symbol cannot be repeated more than three times in a row.
// Symbols like V, L, and D are never repeated.

unordered_map<char, int> romanValues = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
```

- ASCII value of digits [0 – 9] ranges from [48 – 57]
```cpp
bool isDigit(char ch) {
    return (int)ch >= 48 && (int)ch <= 57;
}
```

- Sudoku Box Index Calculation

The expression 
```cpp
int k = i / 3 * 3 + j / 3;

i / 3: This part divides the row index i by 3. The division is integer division, so it truncates the decimal, effectively mapping rows 0-2, 3-5, and 6-8 into 0, 1, and 2, respectively.

* 3: Multiplies the result by 3. This sets the base index for the rows of boxes. Each group of three rows starts at indices 0, 3, or 6.

j / 3: Divides the column index j by 3 (also integer division), categorizing columns 0-2, 3-5, and 6-8 into 0, 1, and 2, respectively.

+-----+-----+-----+
|  0  |  1  |  2  |
+-----+-----+-----+
|  3  |  4  |  5  |
+-----+-----+-----+
|  6  |  7  |  8  |
+-----+-----+-----+


```
is used in the context of Sudoku validation to determine which of the nine 3x3 boxes a cell belongs to on a 9x9 board.