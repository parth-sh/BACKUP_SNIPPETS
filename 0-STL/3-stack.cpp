#include<bits/stdc++.h>
#include<stack>

using namespace std;

// LIFO
int main(){
    stack<int> s;
    for (int i=0;i<10;i++){
        s.push(i);
    }
    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}

// sum of stack can be done using sum of all previous elements