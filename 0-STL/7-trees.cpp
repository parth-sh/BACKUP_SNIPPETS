#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
Node* insert(Node* root, int data) {
    if(root == NULL) {
        return new Node(data);
    } else {
        Node* cur;
        if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        } else {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
    }
}


#include<map>
map<int,pair<int,int>> m;
void fillMap(Node *root,int d,int l){
    if(root==NULL){return;}
    if(m.find(d)==m.end()){
        m[d]=make_pair(root->data,l);
    }else{
        if(m[d].second>l){
            m[d]=make_pair(root->data,l);
        }
    }
    fillMap(root->left,d-1,l+1);
    fillMap(root->right,d+1,l+1);
}
void topView(Node *root){
    fillMap(root,0,0);
    for(pair<int,pair<int,int>> ele : m){
        cout<<ele.second.first<<" ";
    }
}

///// lca 1st approach
// Node *lca(Node* root, int n1, int n2) 
// { 
//     // Base case 
//     if (root == NULL) return NULL; 
  
//     // If either n1 or n2 matches with root's data, report 
//     // the presence by returning root (Note that if a data is 
//     // ancestor of other, then the ancestor data becomes LCA 
//     if (root->data == n1 || root->data == n2) 
//         return root; 
  
//     // Look for datas in left and right subtrees 
//     Node *left_lca  = lca(root->left, n1, n2); 
//     Node *right_lca = lca(root->right, n1, n2); 
  
//     // If both of the above calls return Non-NULL, then one data 
//     // is present in once subtree and other is present in other, 
//     // So this node is the LCA 
//     if (left_lca && right_lca)  return root; 
  
//     // Otherwise check if left subtree or right subtree is LCA 
//     if(left_lca != NULL){
//         return left_lca;
//     }else{
//         return right_lca;
//     }  
// } 



///// lca path-finding approach
// bool traverse(Node* root,vector<int> &path,int n){
//         if(root==NULL){
//             return 0;
//         }
//         path.push_back(root->data);
//         if(root->data==n){
//             return 1;   
//         }
//         bool fl = traverse(root->left,path,n);
//         bool fr = traverse(root->right,path,n);
//         if(fl||fr){
//             return 1;
//         }
//         path.pop_back();
//         return 0;
//     } 
// Node *lca(struct Node* root, int n1, int n2) 
// { 
//     Node *temp;
//     vector<int> path1,path2;
//     if(traverse(root,path1,n1)&&traverse(root,path2,n2)){
//         int i=0;
//         for(i=0;i<path1.size()&&i<path2.size();i++){
//            if(path1[i]!=path2[i]){break;}
//         }
//         temp=new Node(path1[i-1]);
//     }
//     return temp;
// } 





int main() {
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = insert(root, data);
    }
  
    topView(root);
    
    return 0;
}