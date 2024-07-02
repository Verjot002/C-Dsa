// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};
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

void revlist(node*& head) {
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;

    while (curr != NULL) {
        next = curr->next; 
        curr->next = prev; 
        prev = curr;     
        curr = next;     
    }

    head = prev; 
}

int main() {
    node *head =NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    display(head);
    revlist(head);
    display(head);
    return 0;
}