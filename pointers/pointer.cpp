#include<iostream>
using namespace std;
// int main(){
    // int a=10;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    // *ptr =20;// modifying variable by pointer
    // cout<<*ptr<<endl;

    //pointer in array
//     int arr[]={10, 20, 30};
//     cout<<*arr<<endl;
//     //print array using array
//     int *ptr=arr;
//     for(int i=0; i<3; i++){
//         // cout<<*ptr<<endl;
//         cout<<*(arr+i)<<endl;


//         //arr++ this is not allowed
//         // *ptr++;
//     }
// }


//pointer in functions
void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
};
int main(){
    int a=2;
    int b=4;
    int *ptr1=&a;
    int *ptr2=&b;
    swap(ptr1, ptr2);
    // swap(&a,&b)
    cout<<a<<" "<<b<<endl;
}