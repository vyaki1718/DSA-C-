#include<iostream>
using namespace std;

// int getBit(int n, int pos){
//     return (n&(1<<pos) !=0);
// }

// int setBit(int n, int pos){
//     return (n | (1<<pos));
// }

// int clearBit(int n, int pos){
//     int mask = ~(1<<pos);
//     return n &mask;
// }

// int updateBit(int n, int pos, int value){
//     int mask = ~(1<<pos);
//      return (n | (value<<pos));
// }
// int main(){
// // cout<<getBit(5,2)<<endl;
// // cout<<setBit(5,1)<<endl;
// // cout<<clearBit(5,2)<<endl;
// cout<<updateBit(5,1,1)<<endl;


//check number is power of two
// bool isPower2(int n){
//     return (n && !(n & n-1));
// }
// int main(){
//     cout<<isPower2(8);
// }

//number of ones in number
// int noOfOnes(int n){
//     int count=0;
//     while(n){
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }
// int main(){
//     cout<<noOfOnes(19);
// }

//subset
// void subset(int arr[], int n){
//     for(int i=0; i<(1<< n); i++){
//         for(int j=0; j<n; j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     };
// };
// int main(){
//     int arr[4]={1, 2, 3, 4};
//     subset(arr, 4); 
// }

//finding unique number
// int unique(int arr[], int n){
//     int xorsum=0;
//     for (int i=0; i<n; i++){
//         xorsum= xorsum^arr[i];
//     }
//     return xorsum;
// }
// int main(){
//     int arr[]= {1,2,3,4,3,2,1};
//     cout<<unique(arr, 7)<<endl;
// }

//two unique numbers in array
int setBit(int n, int poss){
    return ((n & (1<<poss))!=0);
}
void unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum= xorsum^arr[i];
    };
    int tempxor=xorsum;
    int setbit=0;
    int poss=0;
    while(setbit !=1){
setbit=xorsum & 1;
poss++;
xorsum=xorsum >> 1;

    }
    int newxor=0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], poss-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

}
int main(){
    int arr[]={1,2,3,1,2,3,4,5};
    unique(arr,8);
    return 0;
}