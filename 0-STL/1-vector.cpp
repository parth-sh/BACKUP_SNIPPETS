#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    //2d vector
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);// it pushes 6 0's
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    //1d vectror
    vector<string> strings;
    vector<int> a;
    vector<int> b(5,0);//5   0's
    vector<int> v(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    // iterators are like pointers to locations of container
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
    for(vector<int>::iterator it=a.end()-1;it!=a.begin()-1;it--){
        cout<<*it;
    }
    for(int i:v){
        cout<<i;
    }
    while (!v.empty()) { 
        cout<<v.back(); 
        v.pop_back(); 
    } 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    // Accessing last element 
    cout << v.back() << endl; 
    v.push_back(23);
    v.pop_back();
    vector<int>::iterator i = v.insert(v.begin()+2 ,3,100);
    vector<int>::iterator j = v.erase(v.begin()+3);
    v.resize(18);
    v.reserve(100);
    sort(v.begin(), v.end());
    v.clear();

    return 0;
}



// sort vector

// bool compareInterval(pair<int,int> i1, pair<int,int> i2) 
// { 
//     return (i1.second < i2.second); 
// } 
// int main(){
//     vector<pair<int,int>> v;
//     for(int i=0;i<5;i++){
//         int index,no;cin>>index>>no;
//         v.push_back(make_pair(index,no));
//     }
//     sort(v.begin(),v.end(),compareInterval);
//     for(auto i:v){
//         cout<<i.first<<i.second;
//     }
// }
// .......................................................


// copy vector to array

// vector<int> v{1,2,3,4,5};
// double arr[v.size()];
// std::copy(v.begin(), v.end(), arr);
// .......................................................


// find min and max in vector or array or just 2 digits

// pair<int,int> result = minmax_element(vi.begin(), vi.begin() + 4);
// cout<<result.first<<" | "<<result.second<<endl;
// .......................................................


// max element in vector

// #include<algorithm>
// vector<int> v(10);
// auto it = max_element(v.begin(), v.end());
// cout<<*it;
// .......................................................


// find key in array

// int arr[]={0,12,3,6,4,8};
// int n= sizeof(arr)/sizeof(int);
// int key=3;
// auto it = find(arr,arr+n,key);
// int index= it-arr;
// if(index==n){
//     cout<<"not present";
// }
// else{
//     cout<<"present at "<<index;
// }
// .......................................................


//  binary_search for sorted array <algorithm>

// bool present=binary_search(arr,arr+n,key);
// cout<<present;
// .......................................................