#include<bits./stdc++.h>

using namespace std;

#define n 100
class stack{
    int* arr;
    int  top;

public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    //push
    void push(int x){
        if(top==n-1){
            cout<<"stack is overflow"<<endl;
            return ;
        }
     top++;
     arr[top]=x;
    }
    //pop
    void pop(){
        if(top==-1){
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }

    //top 
    int Top(){
     if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    //empty
    bool empty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(1);

st.push(2);
st.push(3);
cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.empty()<<endl;
}

//reverse sentence
// void reversesentence(string s){
//     stack<string> st;
//     for(int i=0; i<s.length(); i++){
//         string words="";
//         while(s[i]!=' ' && i<s.length()){
//             words +=s[i];
//             i++;
//         }
//         st.push(words);

//     }

//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

// int main(){
// string s="hey, how are you doing?";
// reversesentence(s);
 
// }

//reverse stack
// void insertAtBottom(stack<int> &st,int  ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertAtBottom(st, ele);
//     st.push(topele);

// }

// void reverse(stack<int> &st){
//     if(!st.empty()){
//         return;
//     }
//     int ele = st.top();
//     st.pop();
// reverse(st);

// insertAtBottom(st, ele);
// }

// int main(){
// stack<int> st;
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);

// reverse(st);
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }cout<<endl;

// }


//Prefix evaluation
// int  prefixEval(string s){
//     stack<int> st;
//     for(int i=s.length()-1; i>=0; i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//     else{
//         int op1=st.top();
//         st.pop();
//         int op2=st.top();
//         st.top();

//         switch (s[i])
//         {
//         case '+':
//             st.push(op1+op2);
//             break;
//         case '-':
//             st.push(op1-op2);
//             break;
//         case '*':
//             st.push(op1*op2);
//             break;
//         case '/':
//             st.push(op1/op2);
//             break;
//         case '^':
//             st.push(pow(op1,op2));
//             break;
        
        
//         }
//     }
//     }
//     return st.top();
// }

// int main(){
// cout<<prefixEval("-+7*45+20");
//     return 0;
// }

//postfix evaluation
// int postfixEval(string s){
//     stack<int> st;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.push();

//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
            
            
//             }
//         }
//     }
//     return st.top();
// }


// int main(){
//     cout<<postfixEval("46+2/5*7+")<<endl;
//     return 0;

// }


// //balenced parenthesis
 
//  bool isValid(string s){
//      int n=s.size();
//      stack<char> st;
//      bool ans=true;
//      for(int i=0; i<n; i++){
//          if(s[i]=='{' || s[i]=='(' || s[i]=='['){
//              st.push(s[i]);
//          }else if(s[i]== ')'){
//              if(!st.empty() &&st.top()== '('){
//                  st.pop();
//              }else{
//                  ans=false;
//                  break;
//              }
//          }
     
//          if(s[i]=='{' || s[i]=='(' || s[i]=='['){
//              st.push(s[i]);
//          }else if(s[i]== ']'){
//              if(!st.empty() && st.top()== '['){
//                  st.pop();
//              }else{
//                  ans=false;
//                  break;
//              }
//          }
     
//          if(s[i]=='{' || s[i]=='(' || s[i]=='['){
//              st.push(s[i]);
//          }else if(s[i]== '}'){
//              if(!st.empty() && st.top()== '{'){
//                  st.pop();
//              }else{
//                  ans=false;
//                  break;
//              }
//          }
     

//  }
//  if(!st.empty()){
//      return false;
//  }
//  }


//  int main(){

// string s="{[()}]";

// if(isValid(s)){
//     cout<<"valid string "<<endl;
// }else{
//     cout<<"invalid string"<<endl;
// }

//     return 0;
// }

// int getMaxArea(vector<int> a){
//     int n=a.size(), int ans=0, int i=0;
//     stack<int> st;
//     a.push_back(0);
//     while(i<n){
        
//     }
// }

// int main(){
//     int vector<int> a={2,1,5,6,2,3};

//     cout<<getMaxArea(a);
// }