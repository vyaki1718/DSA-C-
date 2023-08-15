#include<iostream>
using namespace std;

int main(){
    // int i;
    // int l=1;
    // i = 1;
    // int j;
    // j = ++i;
    // int k;
    // k = l++;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<i<<endl;
    // cout<<l<<endl;

    int i=1;
    int j = 2;
    int k;
       //1 //2  //1   //2   //3    //4
    k = i + j + i++ + j++ + ++i + ++j ;

    cout<<i<<" "<<j<<" "<<k<<" "<<endl;

}