#include<iostream>
using namespace std ;
int main(){
    // declare simple variable

    int i = 17;
    double d = 19;

    //declare reference variable

    int& r=i;
    double& s=d;

    cout<<"value of i : "<<i<<endl;
    cout<<"value of reference i : "<<r<<endl;

    cout<<"value of i : "<<d<<endl;
    cout<<"value of reference i : "<<s<<endl;

}