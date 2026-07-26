#include<iostream>
using namespace std;
int main(){
    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=5; j++){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }

//a a a a a
//b b b b b
//c c c c c
//d d d d d
//e e e e e 
    // char i,j;
    // for(i='a'; i<='e'; i++){
    //     for(j='a'; j<='e'; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

//a b c d e
//a b c d e
//a b c d e 
//a b c d e
//a b c d e
//a b c d e
    // char i,j;
    // for(i='a'; i<='e'; i++){
    //     for(j='a'; j<='e'; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25
    // int i,j,count=1;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=5; j++){
    //         cout<<count<<" ";
    //         count=count+1;
    //     }
    //     cout<<endl;
    // }

    // or

    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=5; j++){
    //         cout<<(i-1)*5+j<<" ";
    //     }
    //     cout<<endl;
    // }

// 1
// 2 2
// 3 3 3
// 4 4 4 4 
// 5 5 5 5 5

    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// 1
// 2 1 
// 3 2 1
// 4 3 2 1 
// 5 4 3 2 1

    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=i; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

// a
// b b
// c c c
// d d d d 
// e e e e e

    // char i,j;
    // for(i='a'; i<='e'; i++){
    //     for(j='a'; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// * * * * *
// * * * * 
// * * *
// * *
// *

    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=5; j>=i; j--){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5 
    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=5; j>=i; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
    // int i,j;
    // for(i=5; i>=1; i--){
    //     for(j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 
    // int i,j;
    // for(i=5; i>=1; i--){
    //     for(j=5; j>=i; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

// A B C D 
// A B C 
// A B 
// A 
    // char i,j;
    // for(i='D'; i>='A'; i--){
    //     for(j='A'; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
// Enter n= 5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
    // int i,j,k,n;
    // cout<<"Enter n= ";
    // cin>>n;
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
// Enter n= 5
//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 
    // int i,j,k,n;
    // cout<<"Enter n= ";
    // cin>>n;
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// Enter n= 5
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5
    // int i,j,k,n;
    // cout<<"Enter n= ";
    // cin>>n;
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

// Enter n= 5
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 
    // int i,j,n;
    // cout<<"Enter n= ";
    // cin>>n;
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(char k='A';k<='A'+i-1;k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }
// Enter n= 5
//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1
    // int i,j,n;
    // cout<<"Enter n= ";
    // cin>>n;
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int k=i;k>=1;k--){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

    int i,j,n;
    cout<<"Enter n= ";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1;k<=(i*2)-1;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}