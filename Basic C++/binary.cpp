#include<iostream>
//#include<cmath>
using namespace std;


//checking number is prime
// int main(){
//     int n;
//     cin>>n;
//     bool flag = true;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i == 0){
//             flag = false;
//             break;
//         }
//     }
    
//     if(flag){
//         cout<<"prime\n";
//     }else{
//         cout<<"non prime\n";
//     }

// }

//print all digit of decimal positive number from right to left 
// int main(){
//     int n;
//     cin>>n;

//     while (n > 0)
//     {
//        int rem = n % 10;
//        cout<<rem<<"\n";
//        n= n/10;
//     }
    
// }

//reverse number
int main(){
    int n;
    cin>>n;

    int reverse ;
    while (n>0){
    
        int lastdigit = n % 10;
        reverse= reverse * 10 + lastdigit;
        n= n/10;
    }
    cout<<reverse<<endl;
    return 0;
}