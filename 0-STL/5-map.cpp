#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){
    //map or unordered_map;
    map<string,int> m;
    
    m.insert(make_pair("mango",120));
    
    cout<<m.size();

    pair<string,int> p;
    p.first="apple";p.second=300;
    m.insert(p);

    m["banana"]=30;

    string key;cin>>key;
    auto it=m.find(key);
    if(it!=m.end()){
        cout<<m[key];
    }
    
    cout<<m.count(key);
    
    m[key]+=22;

    m.erase(key);

    m["pineapple"]=50;
    m["litchi"]=60;

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<it->second<<endl;
    }
    
    for(auto p:m){
        cout<<p.first<<p.second;
    }

    multimap<int,int> hash;
    hash.insert({0,1});
    hash.insert(make_pair(0,2));

    hash.upper_bound(0);

    return 0;
}


int main(){
    multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }

    auto it=m.find('b');
    m.erase(it);

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}