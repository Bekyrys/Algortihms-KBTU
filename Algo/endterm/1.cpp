#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;
        Node(int x){
            data = x;
            left = right = NULL;
        }
};

struct Tree{
    Node *root;
    Tree(){
        root = NULL;
    }
    void insert(int n){
        insert(root,n);
    }
    void insert(Node *&tree, int n){
        if (tree == NULL){
            tree = new Node(n);
            return;
        }
        if (tree->data == n) return;
        if (n < tree->data)
            insert(tree->left,n);
        else
            insert(tree->right,n);
    }
   
    void search(int x) {
      search(root, x);
    }

    void search(Node *tree, int x) {
      if (tree == NULL) return;
      if (tree->data == x) {
        print(tree);
        return;
      }
      search(tree->left, x);
      search(tree->right, x);
    }
    
    void print(Node *tree) {
      if (tree == NULL) return;
      cout << tree->data << ' ';
      print(tree->left);
      print(tree->right);
    }
};
int main(){
    int q;
    cin >> q;
    Tree t;
    while(q--){
        int x;
        cin >> x;
        t.insert(x);
    }
    int x;
    cin >> x;
    t.search(x);
    return 0;
}