#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    list<int> l;
    list<string> l1{"apple","mango","banana"};
    l1.front();
    l1.pop_front();
    l1.back();
    l1.pop_back();
    l1.push_back("pineapple");
    l1.sort();
    l1.reverse();
    cout<<l1.front();l1.pop_front();
    l1.push_back("kiwi");

    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<endl;
    }
    l1.remove("kiwi");
    cout<<endl;
    for(string s:l1){
        cout<<s<<endl;
    }
    auto it= l1.begin();
    it++;
    l1.erase(it);
    return 0;
}