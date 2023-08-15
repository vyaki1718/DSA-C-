#include<bits./stdc++.h>
using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(1);//add element to last position 
//     v.push_back(2);
//     v.push_back(3);
   

//     // for(int i=0; i<v.size(); i++){
//     //     cout<<v[i]<<" ";
//     // }

//     // vector<int>::iterator it;
//     // for(it=v.begin(); it!=v.end(); it++){
//     //     cout<<*it<<" ";
//     // }


//     // //auto tell compiler to identify data type
//     // for(auto element:v){
//     //     cout<<element<<" ";
//     // }


//     v.pop_back(); // remove last elemenent


//     vector<int> v2 (3,50);
//     swap(v, v2);
//     for(auto element:v){
//         cout<<element<<" ";
//     }
//     for(auto element:v2){
//         cout<<element<<" ";
//     }

//     //pair
//     pair<int,char>p;
//     p.first=1;
//     p.second='f';
    
// }

//reduce array

 bool myCompare(pair<int,int> p1, pair<int,int> p2){
     return p1.first <p2.first;
 }
int main(){
    int arr[]={10,16,7,14,5,3,2,9};
    vector<pair<int,int> > v;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        // pair<int,int> p;
        // p.first=arr[i];
        // p.second=i;\

        //derect method
        v.push_back(make_pair(arr[i], i));
    }

    //sort 
    sort(v.begin(), v.end(), myCompare);
    for(int i=0; i<v.size(); i++){
        arr[v[i].second]=i;
    }
    for(int i=0; i<v.size(); i++){
        cout<<arr[i]<<" ";
    }
}