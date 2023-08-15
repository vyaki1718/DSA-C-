// #include<bits./stdc++.h>
// using namespace std;

// //rat maze 

// // bool isSafe(int** arr, int x, int y, int n){
// //     if(x<n && y<n && arr[x][y]==1){
// //         return true;

// //     }
// //     return false;
// // }
// // bool ratmaze(int** arr, int x, int y, int n,int** solArr){
// //     if((x==(n-1)) && (y==(n-1))){
// //  solArr[x][y]=1;
// //  return true;
// //     }
// //     if(isSafe(arr, x,y,n)){
// //         solArr[x][y]=1;
// //        if(ratmaze(arr,x+1,y,n, solArr)){
// //              return true;
// //         }
// //     if(ratmaze(arr,x,y+1,n, solArr))  {
// //         return true;
// //     } 
// //     solArr[x][y]=0; //backtracking 
// //     return false;
// //     }
// //     return false;
// // }

// // int main(){
// // int n;
// // cin>>n;
// // // int** arr=new int*[n];
// // // for(int i=0; i<n; i++){
// // //     arr[i]==new int[n];
// // // }

// // // for(int i=0; i<n; i++){
// // //     for(int j=0; j<n; j++){
// // //         cin>>arr[i][j];
// // //     }
// // // }
// // // int** solArr=new int*[n];
// // // for(int i=0; i<n; i++){
// // //     solArr[i]==new int[n];
// // //     for(int j=0; j<n; j++){
// // //         solArr[i][j]=0;
// // //     }
// // // }

// // if(ratmaze(arr,0,0,n,solArr)){
// //     for(int i=0; i<n; i++){
// //     for(int j=0; j<n; j++){
// //         cout<<solArr[i][j]<<" ";
// //     }cout<<endl;
// // }}

// // }

// // bool isSafe(int arr[][], int x, int y, int n){
// //     if(x<n && y<n && arr[x][y]==1){
// //         return true;
// //     }
// //     return false;
// // }

// // int ratMaze(int arr[][], int x, int y, int n , int solArr[][]){
// //     if(x==n-1 && y==n-1){
// //         solArr[x][y]=1;
// //         return true;
// //     }
// //     if(isSafe(arr, x,y,n)){
// //         solArr[x][y]=1;
// //         if(ratMaze(arr,x+1,y,n,solArr)){
// //            return true;
// //         }
// //         if(ratMaze(arr,x,y+1,n,solArr)){
// //            return true;
// //         }
// //         solArr[x][y]=0; //backtracking
// //         return false;

// //     }
// //     return false;
// // }

// // int main(){
// // int n=5;
// // int arr[n][n]= {
// //    {1, 0, 0, 0, 0},
// //    {1, 1, 0, 1, 0},
// //    {0, 1, 1, 1, 0},
// //    {0, 0, 0, 1, 0},
// //    {1, 1, 1, 1, 1}
// // };

// // int solArr[n][n]={0};
// // if(ratMaze(arr, 0,0,n, solArr)){
// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<n; j++){
// //             cout<<solArr[i][j]<<" ";
// //         }cout<<endl;
// //     }
// // }

// // }

// int maze[N][N]  =  {
//    {1, 0, 0, 0, 0},
//    {1, 1, 0, 1, 0},
//    {0, 1, 1, 1, 0},
//    {0, 0, 0, 1, 0},
//    {1, 1, 1, 1, 1}
// };

// int sol[N][N];         //final solution of the maze path is stored here
// void showPath() {
//    for (int i = 0; i < N; i++) {
//       for (int j = 0; j < N; j++)
//          cout << sol[i][j] << " ";
//       cout << endl;
//    }
// }

// bool isValidPlace(int x, int y) {      //function to check place is inside the maze and have value 1
//    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
//       return true;
//    return false;
// }

// bool solveRatMaze(int x, int y) {
//    if(x == N-1 && y == N-1) {       //when (x,y) is the bottom right room
//       sol[x][y] = 1;
//       return true;
//    }

//    if(isValidPlace(x, y) == true) {     //check whether (x,y) is valid or not
//       sol[x][y] = 1; //set 1, when it is valid place
//       if (solveRatMaze(x+1, y) == true)       //find path by moving right direction
//          return true;
//       if (solveRatMaze(x, y+1) == true)         //when x direction is blocked, go for bottom direction
//          return true;
//       sol[x][y] = 0;         //if both are closed, there is no path
//       return false;
//    }  
//    return false;
// }

// bool findSolution() {
//    if(solveRatMaze(0, 0) == false) {
//       cout << "There is no path";
//       return false;
//    }
//    showPath();
//    return true;
// }

// int main() {
//    findSolution();
// }

#include <iostream>
using namespace std;
// bool issafe(int i,int j, int s,bool **visited)
// {
//     if(i<s and j<s and i>=0 and j>=0 and visited[i][j]==0)
//     return 1;
//     else return 0;
// }

// void paths(int x,int y,int s,int **arr, bool **visited,int &count)
// {
//     if(x==s-1 and y==s-1)
//     {
//         count++;
//         return ;;
        
//     }
//     if(!issafe(x,y,s,visited))
//     return;
//     visited[x][y]=true;
    
//     if(x+1<s and x+1>=0 and arr[x+1][y]!=1)
//     paths(x+1,y,s,arr,visited,count);
    
//      if(x-1>=0 and x-1<s  and arr[x-1][y]!=1)
//     paths(x-1,y,s,arr,visited,count);
    
//      if(y+1<s and y+1>=0 and arr[x][y+1]!=1)
//     paths(x,y+1,s,arr,visited,count);
    
//      if(y-1<s and y-1>=0 and arr[x][y-1]!=1)
//     paths(x,y-1,s,arr,visited,count);
    
//     visited[x][y]=false;
// }
// int main() {
//     int s;
//     cin>>s;
   
//     int **arr=new int*[s];
//     for(int i=0;i<s;i++){
//     arr[i]=new int[s];
//     for(int j=0;j<s;j++)
//     cin>>arr[i][j];
//     }
//     bool **visited=new bool*[s];
//     for(int i=0;i<s;i++){
//     visited[i]=new bool[s];
//     for(int j=0;j<s;j++)
//    visited[i][j]=0;
//     }
    
//     int count=0;
//     paths(0,0,s,arr,visited,count);
//     cout<<count;
    
    
    
    

// 	return 0;
// }
int main(){
    int x=-123;
    cout<< abs(x)%10;
    return 0;
}
 