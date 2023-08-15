// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
// int add(int num1, int num2){
//     int sum = num1 + num2;
//     return sum;

// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     cout<<add(a,b)<<endl;


// }

// void display(int a){
//     cout<<a<<endl;
//     return;
// }
// int main(){
//     int a;
//     cin>>a;

// display(a);
 
// }

//prime number using function
// bool isPrime(int num){
//     for(int i=2; i<=sqrt(num); i++){
//         if(num%i==0){
//             return false ;

//         }

//     }
//     return true;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a; i<=b; i++){
//         if(isPrime(i)){
//       cout<<i<<endl;
//         }
//     }
// }
//

//fobonacci sequence
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
    
//     for(int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nextTerm = t1+t2;
//         t1=t2;
//         t2=nextTerm;
        
//     }
//     return;

// }
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
// }

//factorial calculation
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial=factorial* i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = fact(n);
//       cout<<ans<<endl;
// }

//CALCULATE nCr
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n, r;
//     cin>>n>>r;
//     int ans = fact(n)/(fact(n-r)*fact(r));
//     cout<<ans<<endl;
// }

//PASCAL TRIANGLE
// int fact(int n){
//     int factorial=1;
//     for(int i=2; i<=n; i++){
      
//           factorial*=i;
//     }
// return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern (){
//  int n;
//     cout<<"enter no. of rows"<<endl;
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//     cout<<'*';
//         };
//         cout<<endl;
//     }
    
// }
// int main (){
//    pattern();
//    pattern();
//    pattern();
//    return 0;
// }

// int main(){
//     int n=4;
//     int m=20;
//     int a=0;
//     int b=0;
//     for (int i=1; i<=m; i++){
//         if(i%n==0){
//             a =a+i;
//         }else{
//             b =b+i;
//         }
//     }
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<b-a<<endl;
// }
// bool isPrime(int num){
//     for(int i=2; i*i<=num; i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b; i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
// }
// bool isPrime(int num){
//     for(int i=2; i<=sqrt(num); i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a; i<=b; i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
// }
//fibonacci
// void fib(int n){
//     int t1 = 0;
//     int t2 = 1;
//     int nextn;
//     for (int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nextn = t1+t2;
//         t1=t2;
//         t2=nextn;
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
// }
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextn ;
//     for(int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nextn=t1+t2;
//         t1=t2;
//         t2=nextn;
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
// }
// int fact(int n){
//     int factorial = 1;
//     for (int i=2; i<=n; i++){
//         factorial =factorial * i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;

// }
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial*= i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
// }

//sum of n natural number
// int sum(int n){
//     int a=0;
//     for (int i=1; i<=n; i++){
//          a = a+i;
//     }
//     return a;
// }
// int main(){
//     int n;
//     cin>>n;
//     int b = sum(n);
//     cout<<b<<endl;
// }
//pythagorean triplet
// bool check(int x, int y, int z){
//     int a,b,c;
//     a = max(x , max(y,z));
//     if(a==x){
//         b=y;
//         c=z;

//     }else if(a == y){
//       b=x;
//     c=z;
//     }else{
//         b=x;
//         c=y;
//     };
//     if(a*a== b*b + c*c){
//         return true;
//     }else{
//         return false;
//     }

// }
// int main(){
//     int x, y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z)){
//         cout<<"pythagorean triplet"<<endl;

//     }else{
//         cout<<"not pythagorean triplet"<<endl;
//     }

// }


//binary to decimal
// int binaryToDecimal(int n){
//     int ans = 0;
//     int x= 1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 2;// for octal to decimal change base  x*=8
//         n /=10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<binaryToDecimal(n)<<endl;
// }

//decimal to binary
// int decimalToBinary(int n){
//     int ans =0;
//     int x=1;
//     while(n>0){
//         x *=2;
//         n/10;
//     }
//     return ans;
// }
// octal to decimal 
// int octalTodecimal(int n){
//     int ans =0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x *=8;
//         n/10;

//     }
//     return ans;
// }
 
// int main(){
//     int n ;
//     cin>>n;
//     // cout<<decimalToBinary(n)<<endl;
//     cout<<octalTodecimal(n)<<endl;
// }

// hexa decimal to cecimal
// int hexaToDecimal(string n){
//     int ans =0;
//     int x=1;
// int  s =n.size();
// for(int i=s-1; i>=0; i--){
//    if (n[i]>='0' && n[i]<='9'){
//         ans += x*(n[i]-'0');
//    }else if(n[i]>='A'&& n[i]<='F'){
//        ans += x*(n[i]-'A'+10);
//    }
//    x *=16;

// }
// return ans;

// }
// int main(){
//     string n;
//     cin>>n;
//     int s = n.size();
//     cout<<s<<endl;
//     cout<<hexaToDecimal(n)<<endl;
// }

int decimalTobinary(int n){
    int x=1;
    int ans =0;
    while(x <= n){
        x *= 2;
        x /=2;
    };
    while (x > 0){
        int lastdigit = n/x;
      n = n - lastdigit*x;
      x /=2;
      ans = ans*10 + lastdigit;
    };
    return ans ;
}
int main(){
    int n;
    cin>>n;
 cout<<decimalTobinary(n)<<endl;
}