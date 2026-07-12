#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<"square of "<<i<<" is: "<< i*i <<"\n";
    // }

    // Print all even no. n
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"All Odd noumbers between 0 to "<<n <<" is"<<"\n";
    for(int i=0; i<=n; i++){
        if(i%2!=0)
        cout<<i<<"\n";
    }
}