#include<iostream>
using namespace std;

//FOR LOOP
// int main(){
//     int n;
//     cin>>n;

//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     cout<<sum<<endl;
// }

//WHILE LOOP 
// int main(){
//     int n;
//     cin>>n;

//     while(n>0){
//      cout<<n<<endl;
//         cin>>n;
// }
// }
//DO WHILE LOOP
// int main(){
//     int n;
//     cin>>n;
    
//     do
//     {
//         cout<<n<<endl;
//         cin>>n;
//     } while (n>0);
    
// }

//BREAK AND CONTINUE STATMENT
// int main(){
//   int pocketMoney = 3000;
//     for(int date = 1; date <=30; date++){
//         if(date&2==0){
//             continue;
//         }
//         if(pocketMoney == 0){
//             break;
//         }
//         cout<<"GO out today"<<endl;
//         pocketMoney = pocketMoney - 300;
//     }
// }

// int main(){
//     for (int i = 1; i < 100; i++)
//     {
//     if (i%3==0)
//     {
//       continue;
//     }
//     cout<<i<<endl;
//     }
    
// }

int main(){
    int a, b;

    cin>>a>>b;

    for(int sum=a; sum<=b; sum++){
        for(int t=2; t<sum; t++){
            if(sum%t==0){
                break;
            }
        }
        
    }
}