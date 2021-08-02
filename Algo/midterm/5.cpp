
#include <bits/stdc++.h>

using namespace std;

int ans;

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
    void bst(void){
        bst(root);
    }
    void bst(Node *tree){
        if (tree == NULL) return;
        bst(tree->left);
        if((tree->left != NULL) and (tree->right != NULL)){
            ans++;
        }
        bst(tree->right);
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
    t.bst();
    cout << ans;
    return 0;
}