#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this->data=d;
        next=nullptr;
    }
};
Node *head=nullptr;
Node *tail=nullptr;

void insert(){
    int no;cin>>no;
    Node *new_node = new Node(no);
    if(head){
        tail->next=new_node;
        tail=new_node;
    }
    else{
        head=new_node;
        tail=new_node;
    }
}
void display(){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    free(temp);
}
void printReverse(Node* head)  
{  
    // Base case  
    if (head == NULL)  
    return;  
  
    // print the list after head node  
    printReverse(head->next);  
  
    // After everything else is printed, print head  
    cout << head->data << " ";  
}  

//cycle detection
bool has_cycle(Node* head) {
    Node *rabbit = head,*tortoise = head;
    while(rabbit&&tortoise&&rabbit->next){
        rabbit=rabbit->next->next;
        tortoise=tortoise->next;
        if(tortoise==rabbit){
            return 1;
        }
    }
    return 0;
}
int main(){
    int q;cin>>q;
    while(q--){insert();}
    display();
    cout<<head;
    return 0;
}