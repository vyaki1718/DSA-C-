#include<bits\stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int maxidx=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[maxidx]){
        maxidx=l;
    }
    if(r<n && arr[r]>arr[maxidx]){
        maxidx=r;

    }

    if(maxidx != i){
        swap(arr[i],arr[maxidx]);
        heapify(arr, n, maxidx);
    }
}

void heapSort(int arr[], int n){
    //build heap

    for(int i=(n/2)-1; i >=0; i--){
        heapify(arr, n, i);
    }

    //extract element from heap

    for(int i=n-1; i >=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
//print array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={ 22, 19, 3, 25, 26, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
  heapSort(arr, n);

  printArray(arr, n);
    
}