#include<bits./stdc++.h>
using namespace std;


//fibonacci series
// int fib(int n){
//     //return condition
//     if(n == 0 || n==1){
//         return n;
//     }
    
       
//     //recursion function
//     else
//     {
//         return (fib(n-1) + fib(n-2));
//     }
    
// };
// int main(){
//     //initialize variablr n
//     int n=5;
//     cout<<"fibonacci series of number 5 id"<<endl;

//     for(int i=0; i<=n; i++){
//         cout<<fib(i)<<" "; 
//     }
// return 0;
// }

//factorial of number
// int fact(int n){
//     if(n ==0 || n == 1){
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
    

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"factorial of number  "<<n<<" is "<<fact(n)<<endl;
// }


//print the number increasing and decreasing order
// void dec(int n){
//     if(n == 1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;

//     dec(n-1);
// }

// void inc(int n){
//     if(n == 1){
//         cout<<"1"<<endl;
//         return;
//     }
//       inc(n-1);

//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     dec(n);
//     inc(n);
// }


// //check array is sorted or not
// // bool sorted(int arr[], int n){
// //     if(n==1){
// //         return true;
// //     }

// //     bool restarray = sorted(arr+1, n-1);
// //     return (arr[0]<arr[1] && restarray);
// // }
// // int main(){
// //     int arr[]={1,2,3,4,5};
// //     cout<<sorted(arr, 5);
// // }

//find first occurence and last occurence

// int firstoc(int arr[], int n, int i, int key){

//     if(n == i){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstoc( arr,  n, i+1, key);
// }
// int lastoc(int arr[], int n, int i, int key){
//     if(n ==i){
//         return -1;
//     };
// int restArray = lastoc(arr, n, i+1, key);
// if(restArray != -1){
//     return restArray;
// }
// if(arr[i]==key){
//     return i;
// }
// return -1;
// }
// int main(){
//     int arr[]={4,2,1,2,5,2,7};
//     cout<<firstoc(arr,7,0, 2 )<<endl;
//     cout<<lastoc(arr,7,0, 2 )<<endl;
// }

//reverse the string 
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// int main(){
//     reverse("vivek");
// }


//replace pi to 3.14
// void replace(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }else
//     {
//         cout<<s[0];
//         replace(s.substr(1));
//     }
    
// }
// int main(){
//     replace("pipppsdsdpiasdspi");
// }

//tower of hanoi
// void towerOfHanoi(int n, char src, char dest, char help){
//     if(n==0){
//         return ;
//     }
//     towerOfHanoi(n-1, src, help, dest);
//     cout<<"Move from "<<src<<" to "<<dest<<endl;
//     towerOfHanoi(n-1, help, dest, src);
// };
// int main(){
//     towerOfHanoi(3, 'A', 'C', 'B');
// }

//remove duplicate from string
// string removedup(string s){
//     if(s.length()){
//         return "";
//     }
//     char ch=s[0];
//     string ans= removedup(s.substr(1));
//     if(ch = ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// int main(){
//     cout<<removedup("aaabbbcccdddeee")<<endl;
// }

//move all x to last of string
// string moveAllx(string s){
//     if(s.length()==0){
//         return "";
//     }

//     char ch=s[0];
//     string ans = moveAllx(s.substr(1));
//     if(ch=='x'){
//         return ans + ch;
//     }
//     return ch + ans;
// }

// int main(){
// cout<<moveAllx("axxcdsxsxasds")<<endl;
//     return 0;
// }

//print the subsequent 
// void subsequent(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch =s[0];
//     string ros=s.substr(1);
//    subsequent(ros,ans);
//    subsequent(ros, ans+ch);
// };

// int main(){
//     subsequent("ABC", "");
// }


//alog ascii code 
// void subs(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros = s.substr(1);
//     int code=ch;
//     subs(ros, ans);
//     subs(ros, ans+ch);
//     subs(ros, ans+ to_string(code));
// }

// int main(){
//     subs("AB", "");
//     return 0;
// }


//keypad

// string keypadA[]={"", "","abc","def","ghi"};
// void keypad(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string code = keypadA[ch-'0'];
//     string ros=s.substr(1);
    
//     for(int i=0; i<code.length(); i++){
//           keypad(ros, ans+code[i]);
//     }
// }
// int main(){
//     keypad("23","");
//     return 0;
// }

//permutation
// void permutation(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0; i<s.length(); i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
        
//         permutation(ros, ans+ch);
//     }
// }
// int main(){
//     permutation("ABC","");
//     return 0;
// }


//count path
// int countpath(int s, int e){
//     if(s==e){
//         return 1;

//     }
//     if(s>e){
//         return 0;

//     }
//     int count=0;
//     for(int i=0; i<=6; i++){
//         count += countpath(s + i, e);
//     }
//   return count;
// }

// int main(){
//     cout<<countpath(0,3)<<endl;
//     return 0;
// }

//count path for maze\

// int countmaze(int n, int i, int j){
// if(i==n-1 && j==n-1){
//     return 1;
// }
// if(i>=n || j>=n){
//     return 0;
// }
// return countmaze(n, i+1, j) + countmaze(n, i, j+1);
// }

// int main(){
// cout<<countmaze(3,0,0)<<endl;

// }

//tiling ways

// int tilingWays(int n){
//     if(n==0){
//         return 0;
//     }if(n==1){
//         return 1;

//     }
//     return tilingWays(n-1) + tilingWays(n-2);
// }
// int main(){
// cout<<tilingWays(4)<<endl;
// }

//pairing the friends
// int friendPairing(int n){
//     if(n==0 || n==1 || n==2){
//         return n;
//     }
//     return friendPairing(n-1) + friendPairing(n-2)*(n-1);
// }
// int main(){
// cout<<friendPairing(4)<<endl;
// }

//knapsack problem
int knapsack(int value[], int wt[], int n, int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return  knapsack(value, wt, n,w);
    }

    return max(knapsack(value, wt, n-1, w-wt[n-1]+value[n-1]),knapsack(value, wt, n,w));
}

int main(){
int value[]={100, 50, 150};
int wt[]={10,20,30};
int w=50;
cout<<knapsack(value, wt, 3, w)<<endl;
return 0;
}