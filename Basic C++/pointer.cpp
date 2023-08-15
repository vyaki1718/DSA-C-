#include<iostream>
using namespace std;
/// a pointer is variable whose value is the address of another variable

int main(){
    int var =20;  // actual variable

    int *ip; //pointer variable
    ip=&var;  // store the address of var in pointer variable

    cout<<"value v of var variable: ";
    cout<<var<<endl;

    //print the address store in the pointer variable
  cout<<"address of var variable : ";
  cout<<ip<<endl;

  //access the value 
  cout<<"value of *ip variable: ";
  cout<<*ip<<endl;

return 0;

}