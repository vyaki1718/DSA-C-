#include<bits./stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;

}

void insertTail(node* &head, int val){
node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;

};

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
//append kth nodes
int lenth(node* &head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail=head;
int l=lenth(head);
// k=k%l;
int count =1;

while(tail->next!=NULL){
    if(count==l-k){
        newtail=tail;
    }
    if(count==l-k+1){
        newhead=tail;
    }
    tail=tail->next;
    count++;
}
newtail->next=NULL;
tail->next=head;
return newhead;
}
int main(){
   node* head=NULL;
   insertTail(head,1);
   insertTail(head,2);
   insertTail(head,3);
   insertTail(head,4);
   insertTail(head,5);
   insertTail(head,6);
//    display(head);
//    insertAtHead(head, 4);
   display(head);
//    cout<<search(head, 5)<<endl;
   node* newhead=kappend(head, 3);
   display(newhead);
   return 0;

}


// class node{
//     public:
//     int data ;
//     node* next;
//     //constructor
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// //insert head
// void insertHead(node* &head , int val){
//   node *n=new node(val);
//   n->next=head;
//   head=n;
// }

// //insert at tail
// void insertAttail(node* &head, int val){
//     node* n=new node(val);

//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;

//     }
//     temp->next=n;
// }

// //print linked list;
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"-> ";
//         temp=temp->next;
//     }
//     cout<<endl;

// }

// //searching
// bool search(node* head, int key){
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;

//         }
//         temp=temp->next;
//     }
//     return false;
// }

// //deletion
// void deletion(node* head, int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         return;
//     }
//     node* temp=head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* todelet =temp->next;
//     temp->next=temp->next->next;
//    delete todelet;
// }

// //delete head node
// void deleteAthead(node* &head){
    
//     node* todelete=head;
//     head=head->next;
    
//     delete todelete;
// }

// //reverse linked list
// node* reverse(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
         
//          prevptr=currptr;
//          currptr=nextptr;

//     }
//     return prevptr;
// }

// //recursive way
// node* recursiveway(node* &head){
//     if(head==NULL && head->next==NULL){
//         return head;
//     }

//     node* newhead=recursiveway(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }

// //reverse the k nodes 
// node* reverseK(node* &head, int k){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     int count =0;

//     while(currptr!=NULL && count<k){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr, k);
//     }
//     return prevptr;
// }
// //make cycle
// void  makeCycle(node* head, int pos){
//     node* temp=head;
//     node* startnode;
//     int count=1;
//     while(temp->next!=NULL){
//         if(count==pos){
//             startnode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=startnode;
// }


// //cycle detection
// bool cycledetection(node* head){
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }

// //remove cycle
// void removeCycle(node* head){
//     node* slow=head;
//     node* fast=head;
//     do
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (slow!=fast);

//     fast=head;
//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;

//     }

//     slow->next=NULL;
    
// }
// int main(){
// node* head=NULL;
// insertAttail(head, 1);
// insertAttail(head, 2);
// insertAttail(head, 3);
// insertAttail(head, 4);
// insertAttail(head, 5);
// insertAttail(head, 6);
// // insertHead(head, 4);
// // display(head);
// // cout<<search(head, 4)<<endl;
// // // deletion(head, 2);
// // deleteAthead(head);
// // display(head);

// // node*  newhead=reverse(head);
// // node* newhead=recursiveway(head);
// // int k=3;
// // node* newhead=reverseK(head, k);
// // display(newhead);
// makeCycle(head, 3);
// cout<<cycledetection(head)<<endl;
// removeCycle(head);
// cout<<cycledetection(head)<<endl;
// display(head);

// // display(head);
// return 0;
// }


// // //inert 
// // void insertATtail(node* &head, int val){
// //     node* n= new node(val);
// //     if(head==NULL){
// //         head=n;
// //         return;

// //     }
// //     int temp=head;
// //     while(temp->next!=NULL){
// //         temp=temp->next;
// //     }
// //     temp->next=n;
// // }
// // //at head
// // void atHead(node* &head, int val){
// //     node* n= new node(val);
// //     n->next=head;
// //     head=n;
// // }

// //search
// // bool search(node* head, int key){
// //     node* temp =head;
// //     while(temp!=NULL){
// //         if(temp->data==key){
// //             return true;
// //         }
// //         temp=temp->next;
// //     }
// //     return false;
// // }


// //delete nth node

// // void deletion(node* &head, int val){
// // node* temp=head;
// // while(temp->next->data!=val){
// //     temp=temp->next;
// // }
// // node* todelete=temp->next;
// // temp-next=temp->next->next;
// //  delete todelete;
// // }


//Doubly linked list
// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
    
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;

//     }
// };

// //insert at head
// void insertAtHead(node* &head, int val){
//     node* n= new node(val);
//     n->next=head;
//     if(head!=NULL){
// head->prev=n;
//     }
    
//     head=n;
// }
// //insert at tail
// void insertAtTail(node* &head, int val){

//     if(head==NULL){
//         insertAtHead(head, val);
//         return;
//     }
//     node* n= new node(val);
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->prev=temp;
// }

// //display fun
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//     }cout<<endl;
// }

// //deletion 

// void deleteAthead(node* &head){
//     node* todelete=head;
//     head=head->next;
//     head->prev=NULL;
//     delete todelete;

// }
// void deletion(node* &head, int pos){
//     if(pos==1){
//         deleteAthead(head);
//         return;
//     }
//     node* temp=head;
//     int count =1;
//     while(temp!=NULL && count!=pos){
//         temp=temp->next;
//         count++;
//     }
//     temp->prev->next=temp->next;
//     if(temp->next!=NULL){
//  temp->next->prev=temp->prev;
//     }
   
//  delete temp;
// }

// //append k nodes

// //lenth of linekd list

// int main(){
// node* head=NULL;
// insertAtTail(head, 1);
// insertAtTail(head, 2);
// insertAtTail(head, 3);
// insertAtTail(head, 4);
// insertAtTail(head, 6);
// display(head);
// insertAtHead(head,5);
// display(head);
// deletion(head, 5);
// display(head);
// return 0;

// }


//append kth linked list
// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };


// int main(){

// }