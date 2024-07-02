#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node*& head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(node* &head, int val){
    node * n = new node(val);
    node* temp = head;
    if(head == NULL){
       insertAtHead(head,val);
       return;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
        n->next= head;
}
void deleteAtHead(node* &head ){
    node*temp = head;
    
    while(temp->next != head){
        temp = temp->next;
    }
    node *todelete = head;
    temp->next = head->next;
    head = head->next;
    
    delete todelete;
}
void deletion(node* &head, int index)
{
    
    int count = 1;
    node* temp = head;
    if(count == 1){
       deleteAtHead(head);
       return;
    }
    while(count != index - 1){
        temp= temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    
    
}
void display(node* head) {
   
    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtTail(head,6);
    display(head);
    cout<<endl;
    cout<<"Delete At Head"<<endl;
    deleteAtHead(head);
     display(head);
     cout<<"Delete a index"<<endl;
     deletion(head,3);
       display(head);
    return 0;
}
