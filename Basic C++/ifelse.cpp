#include<iostream>
using namespace std;

// int main(){
//     int saving;
//     cin>>saving;

//     if(saving>5000){
//        if(saving>10000){
//            cout<<"go to kerala\n";
//        }else{
//            cout<<"go to goa\n";
//        }

//     }else if(saving >2000){
//         cout<<"go to daman\n";
//     }
//     else{
//         cout<<"go to mumbai\n";
//     }
// }

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//  if(a>b){
//      if(a>c){
//          cout<<"a is maximum"<<a<<endl;
//      }else{
//          cout<<c<<endl;
//      }
//  }else if(b>c){
//      cout<<b<<endl;
//  }else{
//      cout<<c<<endl;
//  }
// }

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"given number is even\n"<<n;
    }
    else{
        cout<<"given number is odd\n";
    }
}