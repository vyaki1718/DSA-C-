#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//            cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<' ';
//         }
//         cout<<endl;
//     }

//     int x;
//     cin>>x;

//     bool flag =false;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]==x){
//                 cout<<i<<" "<<j<<endl;
//                 flag=true;
//             }
//         }
//     }
//     if(flag){
//         cout<<"element is present "<<endl;
//     }else{
//         cout<<"element is not present"<<endl;
//     }
// }

//spiral order matrix trsversal
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << arr[i][j] << ' ';
//     //     }
//     //     cout << endl;
//     // }

//     int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

//    while(row_start <=row_end && col_start<=col_end){
//        //for row star
//        for(int col=col_start; col<=col_end; col++){
//            cout<<arr[row_start][col]<<" ";
//        }row_start++;
//        //for column end
//        for(int row=row_start; row<=row_end; row++){
//            cout<<arr[row][col_end]<<" ";

//        }col_end--;

//        //for row end
//        for(int col=col_end; col>=col_start; col--){
//            cout<<arr[row_end][col]<<" ";
//        }row_end--;

//        //for column start
//        for(int row=row_end; row>=row_start; row--){
//            cout<<arr[row][col_start]<<" ";
//        }col_start++;
//    }
// }

//Transpose of matrix
// int main(){
//     int A[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for(int i=0; i<3; i++){
//         for(int j=i; j<3; j++){
//             int temp=A[i][j];
//             A[i][j]=A[j][i];
//            A[j][i] =temp;
//         }
//     }
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<A[i][j]<<" ";
//         }cout<<endl;
//     }
// }

//multification of matrix
// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2]; int m2[n2][n3]; int ans[n1][n3];

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             cin>>m1[i][j];
//         }
//     }
//     for(int i=0; i<n2; i++){
//         for(int j=0; j<n3; j++){
//             cin>>m2[i][j];
//         }
//     }
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             ans[i][j]=0;
//         }
//     }

//     //main logic
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//            for (int k=0; k<n2; k++){
//                ans[i][j] += m1[i][k]*m2[k][j];
//            }
//         }
//     }

//     //print
//      for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;

//     }
// }

//searching in matrix// time complexity O(n*m)
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     };
//     int target;
//     cin>>target;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//            if(arr[i][j]==target){
//                cout<<i<<" "<<j<<endl;
//            }
//         }
//     }
// }

//searching in matrix
int main() {




    int n, m;
    cin >> n >> m;
    int target;
    cin>>target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    };
    bool found=false;
    int r=0;
    int c=m-1;
    while(r<n && c>=0){
        if(arr[r][c] == target){
          found=true;
        }
        if(arr[r][c]>target){
            c--;
        }else{
            r++;
        }
    };
    if(found){
        cout << "target is found" << std::endl;
    }else{
        cout<<"target not found"<<endl;
    };

    

}