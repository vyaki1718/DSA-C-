#include<bits/stdtr1c++.h>
using namespace std;

// SUM OF n NATURAL NUMBERS
// int sum(int n){
//     int ans=0;
//     for(int i=1; i<=n; i++){
//         ans = ans+i;
    
//     }
//     return ans;
// }
// int32_t main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// }

//check pythogorean triplet
// bool check(int x, int y, int z){
//     int a= max(x, max(y,z));
//     int b,c;
//     if(a== x){
//         b=y;
//         c=z;
//     }else if (a==y)
//     {
//         b=x;
//         c=z;
//     }else{
//         b=x;
//         c=y;
//     }
//     if (a*a == b*b + c*c)
//     {
//         return true;
//     }else{
//         return false;
//     }
    
    
// }
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if (check(x,y,z))
//     {
//         cout<<"pythogorean triplet";
//     }else{
//         cout<<"not pythogorean triplet";
//     }
    
// }

//binary to decimal
int binaryToDecimal(int n){
  int ans = 0;
  int x = 1;
  while (n>0)
  {
    int y=n%10;
    ans += x*y;
    x *= 2;
    n /=10;
  }
  return ans;
}



int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
}