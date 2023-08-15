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
//search in Bst
// Node* searchBST(Node* root , int key){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==key){
//         return root;
//     }
//     if(root->data>key){
//         searchBST(root->left, key);
//     }

//     return searchBST(root->right, key);
// }

//delete in BST

// Node* inordersucc(Node* root){
//     Node* curr= root;
//     while(curr && curr->left != NULL){
//         curr=curr->left;
//     }
//     return curr;

// }
// Node* deleteInBST(Node* root, int key){
//     //first search in bst
//     if(key< root->data){
//         root->left=deleteInBST(root->left, key);

//     }
//     else if(key>root->data){
//         root->right=deleteInBST(root->right, key);
//     }else{
//         if(root->left==NULL){
//             Node* temp=root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right==NULL){
//             Node* temp=root->left;
//             free(root);
//             return temp;
//         }
//         //case 3
//          Node* temp=inordersucc(root->right);
//          root->data=temp->data;
//          root->right=deleteInBST(root->right, temp->data);

//     }

// }




// void inorder(Node* root ){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }


// int main(){
//     Node* root = new Node(4);
//     root->left= new Node(2);
//     root->right= new Node(5);
//     root->left->left= new Node(1);
//     root->left->right= new Node(3);
//     root->right->right= new Node(6); m/

// // if(searchBST(root, 10)==NULL){
// //     cout<<"key doesnt exit";
// // }else{
// //     cout<<"key exit";
// // }
// inorder(root);
// root=deleteInBST(root , 2);
// cout<<endl;
// inorder(root);


// return 0;
// }

//build BST from preorder
Node* preorderBst(int preorder[], int* idx, int key, int min, int max, int n){
    if(*idx>=n){
        return NULL;
    }
    Node* root=NULL;
    if(key > min && key < max){
  root = new Node(key);
  *idx =*idx + 1;
    }  

    if(*idx<n){
        root->left=preorderBst(preorder, idx, preorder[*idx], min, key, n);
    }
    if(*idx<n){
        root->right=preorderBst(preorder, idx, preorder[*idx], key, max, n);
    }
    return root;
}

//preorder

void printpreorder(Node* root){
    if(root==NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main(){
int preorder[]={10,2,1,13,11};
int n=5;
int idx=0;
 Node* root=preorderBst(preorder, &idx, preorder[0], INT_MIN, INT_MAX, n);
  printpreorder(root);

}