#include<bits./stdc++.h>
 using namespace std;

// void primeSieve(int n){
//     int prime[100]={0};
//     for(int i=2; i<=2; i++){
//         if(prime[i]==0){
//             for(int j=i*i; j<=n; j =j+i){
//                 prime[j]== 1;
//             }
//         }
//     }


//     for(int i=2; i<=n; i++){
//         if(prime[i]== false){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     primeSieve(n);
//     return 0;
// }

// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
// #include <bits/stdc++.h>
// using namespace std;
 
// void SieveOfEratosthenes(int n)
// {
//     // Create a boolean array
//     // "prime[0..n]" and initialize
//     // all entries it as true.
//     // A value in prime[i] will
//     // finally be false if i is
//     // Not a prime, else true.
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++)
//     {
//         // If prime[p] is not changed,
//         // then it is a prime
//         if (prime[p] == true)
//         {
//             // Update all multiples
//             // of p greater than or
//             // equal to the square of it
//             // numbers which are multiple
//             // of p and are less than p^2
//             // are already been marked.
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }
 
// // Driver Code
// int main()
// {
//     int n = 30;
//     cout << "Following are the prime numbers smaller "
//          << " than or equal to " << n << endl;
//     SieveOfEratosthenes(n);
//     return 0;
// }



//prime factorization

void primeFactor(int n){
    int spf[100]={0};
    for(int i=2; i<=n; i++){
        spf[i]=i;
    }
    for(int i=2; i<n; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=n; j +=i){
               if (spf[j]=j){
                spf[j]= i;
                }
            }
        }
    }
    while(n != 1){
        cout<<spf[n]<<" ";
        n = n /spf[n];
    }
}
int main(){
int n;
cin>>n;
primeFactor(n);
}