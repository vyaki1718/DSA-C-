#include<bits./stdc++.h>
using namespace std;
#define n 20


// class queued {
//     public:
//     int* arr;
//     int front;
//     int back;

//     public:
//     queued(){
//          arr=new int[n];
//          front =-1;
//          back=-1;
//     };

//     void push(int x){
//         if(back==n-1){
//             cout<<"queue is overflow"<<endl;
//             return;
//         }
//         back++;
//         arr[back]=x;
//         if(front==-1){
//             front++;
//         }
//     };

//     void pop(){
//         if(front==-1 || front>back){
//             cout<<"No element in queue"<<endl;
//         }
//         front++;
//     }
//     int  peek(){
//          if(front==-1 || front>back){
//             cout<<"No element in queue"<<endl;
//             return -1;
//         }
//         return arr[front];
//     };

//     bool empty(){
//                  if(front==-1 || front>back){
//         return 1;
//         }
//         return 0;
//     };
// };

// int main(){
//   queued q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   q.push(4);
//   cout<<q.peek()<<endl;
//   q.pop();
//   cout<<q.peek()<<endl;
//   q.pop();
//   cout<<q.peek()<<endl;
//   q.pop();
//   cout<<q.peek()<<endl;
//   q.pop();



//   cout<<q.empty()<<endl;
// }

//window sliding 

// int main(){
//     int n, k;
//     cin>>n>>k;

//     vector<int> a(n);
//     for(auto &i: a){
//         cin>>i;
//     }
// }


//