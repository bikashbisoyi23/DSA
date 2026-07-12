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

    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }
}