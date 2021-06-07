#include<bits/stdc++.h>
#include<queue>

using namespace std;

// q.size();

int main(){
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    while (!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    
    return 0;
}


int main(){
    priority_queue<int> pq;
    priority_queue <int, vector<int>, greater<int>> gq;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);
    }
    while(!pq.empty()){
        cout<<pq.top();
        pq.pop();
    }
    return 0;
}


int main(){
    class Person{
        public:
        string name;
        int age;

        Person(string n,int a){name=n;age=a;}    
    };
    
    class PersonCompare{
        public:
        bool operator()(Person a,Person b){
            return a.age<b.age;
        }
    };

    priority_queue<Person,vector<Person>,PersonCompare> pq;
    
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        Person p(name,age);
        pq.push(p);
    }

    for(int i=0;i<3;i++){
        Person p=pq.top();
        cout<<p.age<<p.name<<endl;
        pq.pop();
    }

    return 0;
}