// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head,int val){
    node * n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while (temp ->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead( node* &head,int val){
    node *n = new node(val);
     n->next = head;
     head = n;
}
void display (node* head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      
    }
    cout<<endl;
}
void searchVal(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            cout<<"Value founded : "<<key;
            break;
        }
        else{
            temp = temp->next;
        }
            
    
    }
}

int main() {
    node* head = NULL;
   insertAtTail(head , 1);
   insertAtTail(head , 2);
   insertAtHead(head,3);
   display(head);
   searchVal(head,2);
   
    return 0;
}