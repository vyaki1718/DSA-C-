#include<iostream>
using namespace std;

// int main(){
//     char button;
//     cout<<"input a button: ";
//     cin>>button;

//     switch (button)
//     {
//     case 'a' :
//         cout<<"hello"<<endl;
//         break;
//     case 'b' :
//         cout<<"namaste"<<endl;
//         break;
//     case 'c' :
//         cout<<"hola"<<endl;
//         break;
//     case 'd' :
//         cout<<"ciao"<<endl;
//         break;
    
//     default:
//     cout<<"i am still learnig ";
//         break;
//     }
// }


int main(){
    int n1, n2;
    cout<<"input two numbers"<<endl;
    cin>> n1 >> n2;
     char op;
     cout<<"enter operator"<<endl;
     cin>>op;

     switch (op)
     {
     case '+':
        cout<<n1+n2<<endl;
         break;
     
     case '-':
        cout<<n1-n2<<endl;
         break;
     8
     case '*':
        cout<<n1*n2<<endl;
         break;
     
     case '/':
        cout<<n1/n2<<endl;
         break;
     
     default:
     cout<<"Enter another operator";
         break;
     }

}