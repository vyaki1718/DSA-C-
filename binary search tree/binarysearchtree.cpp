#include<bits./stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};

//Build Bst
// Node* buildBST(Node* root, int val){
//     if(root==NULL){
//         return new Node(val);
//     }
//     if(val < root->data){
//         root->left=buildBST(root->left, val);
//     }
//     if(val> root->data){
//         root->right=buildBST(root->right, val);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root ==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

//easrch in BST
Node* searchBST(Node* root, int key){
    if(root=NULL){
        return  NULL;
    }
    if(root->data == key  ){
        return root;
    }
    if(root->data > key){
        searchBST(root->left, key);
    }

    return searchBST(root->right, key);
}
    
int main(){
    
// Node* root = NULL;

// root = buildBST(root, 5);
// buildBST(root, 1);
// buildBST(root, 3);
// buildBST(root, 4);
// buildBST(root, 2);
// buildBST(root, 7);

//  inorder(root);

Node* root= new Node(4);
root->left=new Node(2);
root->right=new Node(5);
root->left->left=new Node(1);
root->left->right=new Node(3);
root->right->right=new Node(6);

if(searchBST(root, 5)== NULL){
    cout<<" key doesn't exit"<<endl;
}else{
    cout<<"key exits"<<endl;
}

return 0;


}