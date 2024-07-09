#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node *right;
    node *left;
    node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};

void printLevel(node* root) {
    if (!root) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL); 
    while (!q.empty()) {
        node* n = q.front();
        q.pop();
        if (n != NULL) {
            cout << n->data << " ";
            if (n->left) {
                q.push(n->left);
            }
            if (n->right) {
                q.push(n->right);
            }
        } else if (!q.empty()) {
            q.push(NULL);
        }
    }
    cout << endl;
}
int printSumofNode(node* root){
    if(root == NULL) return 0;
    
    return root->data +printSumofNode(root->left) + printSumofNode(root->right);
}
int maxheightTree(node* root){
    if(root == NULL) return 0;
   int lheight =  maxheightTree(root->left);
   int rheight = maxheightTree(root->right);
   if(lheight>rheight){
       return lheight+1;
   }
   else{
      return rheight+1; 
   }
}
int sumAtLevel(node* root, int k) {
    if (!root) return 0;
    queue<node*> q;
    q.push(root);
    q.push(NULL); 
    int level = 0;
    int sum = 0;
    while (!q.empty()) {
        node* n = q.front();
        q.pop();
        if (n != NULL) {
            if (level == k) {
                sum += n->data;
            }
            if (n->left) {
                q.push(n->left);
            }
            if (n->right) {
                q.push(n->right);
            }
        } else if (!q.empty()) {
            level++;
            q.push(NULL);
        }
    }
    return sum;
}

void printNode(node* root) {
    printLevel(root);
}

int countNode(node* root) {
    if (root == NULL) return 0;
    else {
        return countNode(root->left) + countNode(root->right) + 1;
    }
}

int main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(6);
    root->left->right = new node(7);
    root->right->left = new node(3);
    root->right->right = new node(4);

 
    printNode(root);

    int level = 2;
    cout << sumAtLevel(root, level) << endl;

    cout << countNode(root) << endl;
    cout<<printSumofNode(root)<<endl;
    cout<<maxheightTree( root)<<endl;
    return 0;
}

/*
*/
