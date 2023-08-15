// #include<iostream>
// // #include<climits>
// using namespace std;
// // int main(){
// //     // int array[4]={10, 20, 30, 40};
// //     // cout<<array[3]<<endl;

// //     int n;
// //     cin>>n;
  
// //   int array[n];
// //   for(int i=0; i<n; i++){
// //       cin>>array[i];
// //   }
// //   int maxNo = INT_MIN;
// //   int minNO = INT_MAX;


// //   for(int i=0; i<n; i++){
// //   maxNo = max(maxNo, array[i]);
// //   minNO = min(minNO, array[i]);
// //   }
// //   cout<<minNO<<" "<<maxNo<<" "<<endl;
// // }  


// //LINEAR SEARCH
// // int linearSearch(int arr[], int n,int key){
// // for (int i=0; i<n; i++){
// //    if(arr[i]==key){
// //        return i;}

   
// // }
// // return -1;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     int key;
// //     cin>>key;
// //     cout<<linearSearch(arr,  n, key);

// // }

// //BINARY SEARCH 

// // int binarySearch(int arr[], int n, int key){
// //  int s=0;
// //  int e=n;
// //  while(s<=e){
// //     int mid = (s+e)/2;
// //     if (arr[mid]==key){
// //         return mid;
// //     }else if (arr[mid]>key){
// //         e=mid-1;
// //     }
// //     else{
// //         s=mid+1;
// //     }
// //  };
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     int key;
// //     cin>>key;
// //     cout<<binarySearch(arr, n, key)<<endl;
// // }

// //SORTING
// //SELECTION SORT
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }

// //     for(int i=0; i<n-1; i++){
// //         for(int j=i+1; j<n; j++){
// //             if(arr[j]<arr[i]){
// //                 int temp = arr[j];
// //                 arr[j]=arr[i];
// //                 arr[i]=temp;

// //             }
// //         }
// //     }
// //     for(int i=0; i<n; i++){
// //         cout<<arr[i]<<" ";
        
// //     }cout<<endl;
// // }

// //BIBBLE SORT
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];
// //     };

// // int counter=1 ;
// //    while (counter<n -1)
// // {
// //     for(int i=0; i<n-counter; i++){
// //   if(arr[i]>arr[i+1]){
// //       int temp=arr[i];
// //       arr[i]=arr[i+1];
// //       arr[i+1]=temp;

// //   }
// //     };
// //     counter++;
// //     };
// //     for(int i=0; i<n; i++){
// //         cout<<arr[i]<<' ';
// //     };
// // }


// //insertion sort
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }

// //     for(int i=1; i<n; i++){
// //         int current = arr[i];
// //         int j=i-1;
// //         while(arr[j]> current && j>=0){
// //             arr[j+1]=arr[j];
// //             j--;
// //         }
// //         arr[j+1]= current;
// //     }
// //     for (int i=0; i<n; i++){
// //         cout<<arr[i]<<' ';
// //     }
// // }

// //max number from array
// // int main(){
// //     int n;
// //     cin>>n;

// //     int arr[n];
// //     for(int i=0; i<n; i++){
// //         cin>>arr[i];

// //     }
// //     int mx = -199999;
// //     for(int i=0; i<n; i++){
// //         mx = max(mx, arr[i]);
// //         cout<<mx<<endl;
// //     }
// // }

// //sum of all subarray in array [1,2,0,7,2]
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int curr = 0;
// //     for(int i=0; i<n; i++){
// //         curr =0;
// //         for(int j=i; j<n;j++){
// //             curr +=arr[j];
// //             cout<<curr<<endl;
// //         }
// //     }
// // }

// //longest arithmetic subarray
// // int main(){
// //     int n;
// //     cin>>n;
// //     int a[n];
// //     for(int i=0; i<n; i++){
// //         cin>>a[i];
// //     }
// //     int ans =2;
// //     int curr =2;
// //     int pd = a[1]-a[0];
// //    int  j=2;
// //     while(j<n){
// //         if(a[j]-a[j-1]==pd){
// //             curr++;
// //         }else{
// //             pd = a[j]-a[j-1];
// //             curr=2;
// //         }
// //         ans = max(ans, curr);
// //         j++;
// //     }
// //     cout<<ans<<endl;
// // }

// //record breaking day

// // int main(){
// //     int n;
// //     cin>>n;
// //     int a[n+1];
// //     for (int i=0; i<n; i++){
// //         cin>>a[i];
// //     }
// //     a[n]=-1;
// //     if(n==1){
// //         cout<< '1'<<endl;
// //         return 0;
// //     }
// //     int ans =0;
// //     int mx = -1;
// //     for(int i=0; i<n; i++){
// //         if(a[i]>mx && a[i]>a[i=1]){
// //             ans++;
// //             mx = max(mx, ans);
// //         }
// //     }
// //     cout<<ans<<endl;
// // }

// //linear search
// // int linearSearch(int arr[], int n, int key){
// //     for(int i=0; i<n; i++){
// //         if(arr[i] == key){
// //             return i;
// //         }
// //     }
// //     return -1;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i =0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     int key;
// //     cin>>key;
    
// //     cout<<linearSearch(arr, n, key)<<endl;
// // }

// //binary search
// // int binarySearch(int arr[], int n, int key){
// //     int s=0;
// //     int e=n;
// //     while(s<=e){
// //         int mid = (s+e)/2;
// //         if (arr[mid]==key){
// //             return mid;
// //         }else if (arr[mid]>key){
// //             e=mid-1;
// //         }else{
// //             s=mid+1;
// //         }
// //     }
// //     return -1;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i =0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     int key;
// //     cin>>key;
    
// //     cout<<binarySearch(arr, n, key)<<endl;
// // }


// //selection sort

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i =0; i<n; i++){
// //         cin>>arr[i];
// //     };
// //     for(int i=0; i<n; i++){
// //         for(int j=i+1; j<n; j++){
// //             if(arr[j]<arr[i]){
// //             int temp=arr[j];
// //             arr[j]=arr[i];
// //             arr[i]=temp;
// //             }
// //         }
// //     }

// //   for(int i=0; i<n; i++){
// //       cout<<arr[i]<<" ";
// //   }cout<<endl;  
   
   
// // }

// //bubble sort
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for (int i=0; i<n; i++){
// //         cin>>arr[i];
// //     }
// //     int counter =1;
// //     while(counter<n){
// //         for(int i=0; i<n-counter; i++){
// //             if(arr[i]>arr[i+1]){
// //                 int temp=arr[i];
// //                 arr[i]=arr[i+1];
// //                 arr[i+1]=temp;

// //             }
// //         };
// //         counter++;
// //     }
// //     for(int i=0; i<n; i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;
// // }

// //insertion sort
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=1; i<n; i++){
//         int current=arr[i];
//         int j= i-1;
//         while(arr[j]>current && j>=0){
//         arr[j+1]=arr[j];
//         j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

#include<iostream>
using namespace std;
 
// Function to return trailing
// 0s in factorial of n
int findTrailingZeros(int n)
{
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    // for (int i = 5; n / i >= 1; i *= 5)
    //     count += n / i;
 
 while(n/5>0){
count +=n/5;
 n /=5;
 }
    return count;
}
 
// Driver Code
int main()
{
    int n = 150;
    cout << "Count of trailing 0s in " << 100
         << "! is " << findTrailingZeros(n);
    return 0;
}