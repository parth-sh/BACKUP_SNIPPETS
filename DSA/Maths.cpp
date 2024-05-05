#include "bits-stdc++.h"
using namespace std;

// Eculidians Algorithm
// https://youtu.be/JUzYl1TYMcU
int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}
int main() {
    cout << gcd(10, 45);
    return 0;
}