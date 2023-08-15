#include<iostream>
using namespace std;

//rectangle pattern
// int main(){
//     int col, row;
//     cin>>row>>col;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// hollow rectangle
// int main(){
//     int col, row;
//     cin>>row>>col;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//          if(i==1 || i==row || j==1 ||j==col){
//              cout<<"*";
//          }else{
//              cout<<" ";
//          }
         
//         }
//         cout<<endl;
//     }
// }

//half inverted pyramid
int main(){
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}