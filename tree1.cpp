#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void rightView(node* root) {
    if (!root) return;
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            node* curr = q.front();
            q.pop();

            if (i == n - 1) {
                cout << curr->data << " ";
            }
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
}
void leftView(node* root) {
    if (!root) return;
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            node* curr = q.front();
            q.pop();

            if (i == 0) {
                cout << curr->data << " ";
            }
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
}

// int addChildNode(node* root) {
//     if (root == NULL) return 0;
//     int sum = 0;
//     if (root->left != NULL) sum += root->left->data;
//     if (root->right != NULL) sum += root->right->data;
//     root->data += sum;
//     return root->data; 
// }

// void printTree(node* root) {
//     if (root == NULL) return;
//     if (root->left != NULL) cout << root->left->data << " ";
//     if (root->right != NULL) cout << root->right->data << " ";
// }

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
     root->right->left->right = new node(8);
    

   
    // printTree(root);
    // cout << endl;

    // cout << addChildNode(root) << endl;
    
 
    // printTree(root);
    // cout << endl;

    rightView(root);
    cout<<endl;
    leftView(root);
    cout << endl;

    return 0;
}
