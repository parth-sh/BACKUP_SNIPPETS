// begin() – Returns an iterator to the first element in the set.
// end() – Returns an iterator to the theoretical element that follows last element in the set.
// size() – Returns the number of elements in the set.
// max_size() – Returns the maximum number of elements that the set can hold.
// empty() – Returns whether the set is empty.

// set <int, greater <int> > s1;

// set <int> s2;

// std::set<T> set(begin(array), end(array));

// s2.size();

// // insert elements in random order 
//     s1.insert(40); 
//     s1.insert(30); 
//     s1.insert(60); 

// for (itr = s2.begin(); itr != s2.end(); ++itr) { 
//     cout << '\t' << *itr; 
// } 

// // remove all elements up to 30 in s2
// s2.erase(s2.begin(), s2.find(30)); 

// num = s2.erase (50); 


// if (s.find(key) != s.end())
//     std::cout << "Element is present in the set" << '\n';
// else
//     std::cout << "Element not found" << '\n';