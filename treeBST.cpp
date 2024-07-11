#include <iostream>
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

node* insertNode(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else if (val > root->data) {
        root->right = insertNode(root->right, val);
    }
    return root;
}

void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    node* root = NULL;
    int n, d;

    cin >> n;
  
    for (int i = 0; i < n; i++) {
        cin >> d;
        root = insertNode(root, d);
    }
 
    inorder(root);
    cout << endl;

    return 0;
}
