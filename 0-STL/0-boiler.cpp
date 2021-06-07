// Some C++ data types, their format specifiers, and their most common bit widths are as follows:

// Int ("%d"): 32 Bit integer
// Long ("%ld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value
// String ("%s")



// c++ by default passes array by reference cause it passes a pointer

atoi/stoi

string s+=to_string(1);

cin.ignore();

INT_MAX
INT_MIN

pow(10,2);

sqrt(N);
cbrt(N)

typedef unsigned long long ll;

const int size=1e18;

fill_n (array, n, 0);
memset(a, -1, sizeof(a)); 

sort(v.begin(),v.end(),compareInterval);

int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);
sizeof(arr)/sizeof(arr[0]);

string s(1,str[result]);

void func(int *p,int &a){}

int *arr=new int[n];

Node *a=new Node();

Node *arr=new Node[n+1];

Node arr[n];

swap(a,b);

res=max(2,3);

make_pair(a,b);

pair<int,int> result = minmax_element(vi.begin(), vi.begin() + 4);
cout<<result.first<<" | "<<result.second<<endl;

is_sorted(v.begin(),v.end())

std::copy(v.begin(), v.end(), arr);

auto it = max_element(v.begin(), v.end());

int *a = min_element(arr,arr+n);
        
accumulate(a, a+n, initial_sum);

__builtin_popcount(n^m);


// auto it = find(arr,arr+n,key);
// if (itr != end(arr)) {
//     cout << "Element " << elem << " is present at index "
//             << distance(arr, itr) << " in the given array";
// }else {
//     cout << "Element is not present in the given array";
// }



// bool present=binary_search(arr,arr+n,key);



// vector<int> v;
// while(n!=0){
//     v.push_pack(n%10);
//     n/=10;
// }
// reverse(v.begin(), v.end());




// string S="parth";cout<<s.size();
// for(char i:S){cout<<i;}


// .......................................................


// pointer meaning

// new ClassName() 
// returns a pointer to a object thats
// why we need  * ;
// Node *a=new Node();
// Node* arr=new Node[n+1];

// this->data 
// in below class 
// this is a predefined pointer
// it can also be used for chaining functions in c++

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     // Node() 
//     // {data=1;next=NULL;} 
//     //or {this->data=d;this->next=NULL;}
// };
// int main(){
//     Node a;
//     cout<<a.data<<endl<<a.next;
//     return 0;}
// .......................................................