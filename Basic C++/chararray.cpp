#include<bits/stdc++.h>
using namespace std;
// int main(){
    //declaring array
    // char arr[100]= "vivekp";
    // int i=0;
    // while(arr[i] != '\0'){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

// get input
//  char arr[100];
//  cin>>arr;
//  cout<<arr[3];// to acceses individual element
    

// }

//Check palindrome
// int main()
// {
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//     bool check=true;
//     for(int i=0; i<n; i++){
//         if(arr[i] != arr[n-1-i]){
//             check=false;
//             break;
//         };
//     };
//     if(check==true){
//         std::cout <<"word is palindrome"<<endl;
//     }else{
//         cout<<"word is not palindrome"<<endl;
//     }

//     return 0;
// }


// maxinum word in array
int main(){
    int n;
    cin>>n;
    cin.ignore(); 
    char aar[n+1]
    cin.getline(arr, n);
    cin.ignore();
    int i=0;
    int currentlen =0;
    int maxlenth =0;
    int st=0;
    int maxst=0;
    while(i<n){
if(arr[i]==' '|| arr[i]== '\0'){
    if(currentlen>maxlenth){
        maxst=st;
        maxlenth=currentlen;
    }
    st=i+1;
    currentlen=0;
}else
{
    currentlen++;
}
if(arr[i]== '\0')
  break;
  i++;
    }
    cout<<arr<<endl;
    cout<<maxlenth<<endl;
    for(int i=0; i<maxlenth; i++){
        cout<<arr[maxst+i];
        cout<<endl;
    }
}