#include <bits/stdc++.h> 
using namespace std; 

class Car {        // The class
  public:          // Access specifier
    static int i;  // Attribute
    Car() { // Constructor with parameters
      i = 5;
    }
};

int Car::i = 1;

int main() {
  // Create Car objects and call the constructor with different values
  
  Car obj;
  Car::i = 7;    // scope variable is used to access static variable outside of class.
  cout<<obj.i;
  return 0;
}