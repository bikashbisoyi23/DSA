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
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"All Odd noumbers between 0 to "<<n <<" is"<<"\n";
    // for(int i=0; i<=n; i++){
    //     if(i%2!=0)
    //     cout<<i<<"\n";
    // }

    // int i;
    // for(i=101; i<=200; i++){
    //     cout<<i<<endl;
    // }

    // Print a-z
    // char name;
    // for(name='a'; name<='z'; name++){
    //     cout<<name<<"\n";
    // }

    // Print 10-1

    // int num;
    // cout<<"Enter the number";
    // cin>>num;
    // for(int i=num; i>=1; i--){
    //     cout<<i<<"\n";
    // }

    // 1-100 print with diference between 2 no. 3
    // for(int i=1; i<=100; i=i+3){
    //     cout<<i<<"\n";
    // }

    // Table Program

    // int n;
    // cout<<"Enter the no.: ";
    // cin>>n;
    // for(int i=1; i<=10; i++ ){
    //     cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    // }

    // Power

    // int n, pow;
    // cout<<"Enter the no.: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    // int num=n;
    // for(int i=1; i<pow; i++){
    //     num=num*n;
    // }
    // cout<<"Your ans is: "<<num;

    // Sum of n natural number

    // int n,sum=0;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for(int i=0; i<=n; i++){
    //     sum=sum+i;
    // }

    // cout<<"Sum of "<<n<<" natural no. is: "<<sum <<"\n";

    // cout<<"By formulay ans is: "<<(n*(n+1))/2;
// Sum of n Natural numbers Square
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=0; i<=n; i++){
        sum=sum+i*i;
    }

    cout<<"Sum of "<<n<<" natural numbers square is: "<<sum <<"\n";


}