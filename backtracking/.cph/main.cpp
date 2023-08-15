#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum +=i;

//     }
//     cout<<sum;
//     return 0;

// }

// prime factorization
// int isPrime(int n){
//     for(int i =2; i<n; i++){
//         if(n%2==0){
//             return false;
//         }
        
//     }
//     return true;
// }

// void primeFactors(int n){
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             int x=i;
//             while(n%x==0){
//                 cout<<i<<" ";
//                 x=x*i;
//             };
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     primeFactors(n);
// return 0;
// }

//smaller diviser of number
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2; i<=n; i++){
//             if(n%i==0){
//                 cout<<i;
//                 break;
//             }
//     }
    
// }

//print all number smaller or equal to n and not multiple of x

// int main(){
//     int n,x;
//     cin>>n>>x;
//     for (int i=1; i<=n;i++){
//         if(i%x==0){
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }

//print star vertically and horizontally

// int main(){
//     int n;
//     cin>>n;

//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cout<<"*"<<" ";
//        } 
//        cout<<endl;
//    }
// }

//invert tringle pattern
// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while(i<=n){
//         int j=1;
//         while(j<=n-i){
//             cout<<" ";
//             j++;
//         }
//          while(j<=n){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//       i++ ; 
    
   
//    }
// }


//count a number of digit in number
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(!n%10==0){
//         n=n/10;
//         count++;
//     }
//     cout<<count<<endl;
// }

//All devisor of a number
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

//factorial of number
// int main(){
//     int n;
//     cin>>n;
//     int x=1;
//     while(n>0){
//         x =x*n;
//         n--;
//     }
//     cout<<x;

// }

//GCD of two numbers
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int x=min(a,b);
//     int ans=1;
//     for(int i=1; i<=x; i++){
//         if(a%i==0 && b%i==0){
//             ans=i;
//         }
//     }
//     cout<<ans;
// }


//LCM of two number 
// int main(){
//     int a,b;
//     cin>>a>>b;
//      int start=max(a,b);
//      int end=a*b;

//      int ans=start;
//      for(int i=start;i<=end; i++){
//          if(i%a==0 && i%b==0){
//            ans=i;
//            break;
//         }
//      }
//     cout<<ans;
// }

//fibonacci sequence
int main(){
    int n;
    cin>>n;
    int t1=1;
    int t2=1;
    int nextTerm;
    for(int i=1; i<=n; i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}