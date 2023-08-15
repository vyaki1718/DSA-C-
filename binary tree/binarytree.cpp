#include<bits./stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};

// void preorder(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// //inorder
// void inorder(struct node* root){
//     if(root==NULL){
//         return;

//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// //postorder
// void postorder(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
// struct node* root= new node(1);
// root->left=new node(2);
// root->right=new node(3);

// //
// root->left->left=new node(4);
// root->left->right=new node(5);
// root->right->left=new node(6);
// root->right->right=new node(7);



// // preorder(root);
// // inorder(root); 
// postorder(root);
// /*
//       1
//       /\
//       3 4
//      /\
//     5  6


// */
// }

//build tree from preorder and inorder;

// int search(int inorder[], int st, int en, int curr){
//     for(int i=0; i<=en; i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }

// node* buildTree(int preorder[], int inorder[], int st, int en){
//     int idx=0;
// if(st>en){
//     return NULL;
// }

// int curr=preorder[idx];
// idx++;
// node* n=new node(curr);
// if(st==en){
//     return n;
// }
// int pos=search(inorder, st, en , curr);
// n->left=buildTree(preorder, inorder, st, pos-1);
// n->right=buildTree(preorder, inorder , pos+1, en);

// }

// void printTree(node* root){
//     if(root==NULL){
//         return ;
//     }
//     printTree(root->left);
//     cout<< root->data<<" ";
//     printTree(root->right);

// }

// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
//   node* root = buildTree(preorder, inorder, 0, 4);
//   printTree(root);
// }


//build tree from postorder and inorder
// int search(int inorder[], int st, int en, int val){
//     for(int i=0; i<=en; i++){
//         if(inorder[i]==val){
//             return i;
//         }
//     }
//     return -1;
// }

// Node* buildTree(int postorder[], int inorder[], int st, int en){

//     static int idx=4;
// if(st>en){
//     return NULL;
// }
//     int val=postorder[idx];
//     idx--;
//     Node* curr= new Node(val);
//     if(st==en){
//         return curr;

//     }
//     int pos=search(inorder, st, en, val);
//     curr->right=buildTree(postorder, inorder, pos+1, en);
//     curr->left=buildTree(postorder, inorder, st, pos-1 );
//   return curr;
// }

// void print(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);

// }

// int main(){
// int postorder[]={4,2,5,3,1};
// int inorder[]={4,2,1,5,3};
// Node* root=buildTree(postorder, inorder, 0, 4);
// print(root);


// }


//level order travelser

// void printleveltravel(Node* root){
//     //base case
//     if(root ==NULL){
//         return ;
//     }
    
//     queue<Node*> q;

//     q.push(root);
//     while(q.empty()==false){
//         Node* node=q.front();
//         cout<<node->data<<" ";
//         q.pop();
//         if(node->left!=NULL){
//             q.push(node->left);
//         }
//         if(node->right!=NULL){
//             q.push(node->right);
//         }
        
//     }

// }

//kth level sum 
// int sumAtk(Node* root , int k){
//     if(root == NULL){
//         return -1;
//     }
//    queue<Node*> q;
//    q.push(root);
//    q.push(NULL);

//    int level=0;
//    int sum=0;

//    while(!q.empty()){
//        Node* node=q.front();
//        q.pop();
//        if(node !=NULL){
//            if(level==k){
//                sum += node->data;
//            }
//            if(node->left){
//                q.push(node->left);
//            }
//            if(node->right){
//                q.push(node->right);
//            }
//        }
//        else if(!q.empty()){
//            q.push(NULL);
//            level++;
//        }

//    }
// return sum;

// }

//count nodes 
// int countNodes(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     return countNodes(root->left )+countNodes (root->right) +1;
// }


//sum of all nodes
// int sumAllnodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     return sumAllnodes(root->left) + sumAllnodes(root->right) + root->data;
// }


//height of tree
// int calcHeight(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//  int leftHeight= calcHeight(root->left);
//  int rightHeight=calcHeight(root->right);

//  return max(leftHeight, rightHeight) +1;

// }

//diemeter of tree

// int calheight(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(calheight(root->left), calheight(root->right)) +1;
// }

// int diemeter(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int lheight=calheight(root->left);
//     int rheight=calheight(root->right);

//     int currdie=lheight + rheight + 1;

//     int ldie=diemeter(root->left);
//     int rdie=diemeter(root->right);

//     return max(currdie, max(ldie,rdie));


// }

//optimoze way
// int caldie(Node* root, int* height){
//     if(root==NULL){
//         *height=0;
//         return 0;
//     }

//     int lh=0; 
//     int rh=0;

//     int ldie=caldie(root->left, &lh);
//     int rdie=caldie(root->right, &rh);

//     int currdie=lh+rh+1;
//     *height=max(lh, rh) +1;

//     return max(currdie, max(ldie,rdie));
// }

//sum replacement 

// void sumreplace(Node* root){
//     if(root==NULL){
//         return;
//     }
//     sumreplace(root->left);
//     sumreplace(root->right);

//     if(root->left !=NULL){
//         root->data += root->left->data;
//     }
//     if(root->right != NULL){
//         root->data += root->right->data;
//     }
// }

// void preorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

//height balenced tree

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int lh=height(root->left);
//     int rh=height(root->right);

//     return max(lh,rh)+1;
// }

// bool isBalenced(Node* root){
//     if(root == NULL){
//         return true ;
//     }

//     if(isBalenced(root->left)==false){
//         return false;
//     }
//     if(isBalenced(root->right)==false){
//         return false;
//     }

//     int lh=height(root->left);
//     int rh=height(root->right);
// int abs=lh-rh;
// if(abs<=1){
//     return true;

// }else{
//     return false;
// }

// }

//right view
// void rightView(Node* root){
//     if(root == NULL){
//         return ;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         int n=q.size();
//         for(int i=0; i<n; i++){
//             Node* curr=q.front();
//             q.pop();
//             if(i==n-1){
//                 cout<<curr->data<<" ";
//             }
//             if(curr->left!= NULL){
//                 q.push(curr->left);
//             }
//             if(curr->right!=NULL){
//                 q.push(curr->right);
//             }
//         }
//     }
// }

/*
//left view
void leftView(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        for(int i=1; i<n; i++){
            Node* temp=q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}
*/
int main(){
  Node* root=new Node(1);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(4);
 root->left->right=new Node(5);
 root->right->left=new Node(6);
 root->right->right=new Node(7);

//  Node* root2=new Node(1);
//  root2->left=new Node(2);
//  root2->left->left=new Node(3);
// //  printleveltravel(root);
// cout<<sumAtk(root, 2)<<endl;
// cout<<countNodes(root)<<endl;

// cout<<sumAllnodes(root)<<endl;

// cout<<calcHeight(root)<<endl;

// cout<<diemeter(root)<<endl;
// int height=0;
// cout<<caldie(root, &height)<<endl;

//sum replacement
// preorder(root);
// cout<<endl;
// sumreplace(root);
// preorder(root);
// cout<<endl;

//balenced height tree
// int height=0;
//


// rightView(root);

// leftView(root);


}