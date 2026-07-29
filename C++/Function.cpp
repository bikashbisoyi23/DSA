#include<iostream>
using namespace std;

// int Sum(int a,int b){
//     int ans=a+b;
//     return ans;
// }

// int Mul(int a,int b){
//     int ans=a*b;
//     return ans;
// }
// void fun(){
//     cout<<"Hello Guys";
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<Sum(a,b);
//     cout<<endl;
//     cout<<Mul(a,b);
//     cout<<endl;
//     fun();

// }

bool Prime(int n)
{
    if(n<2){
        return 0;
    }

    for(int i=2; i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int Fact(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the number a= ";
    cin>>a;
    cout<<"Enter the number b= ";
    cin>>b;

    cout<<Prime(a);
    cout<<endl;
    cout<<Fact(a);
    cout<<endl;
    cout<<Prime(b);
    cout<<endl;
    cout<<Fact(b);
    cout<<endl;
    cout<<Prime(b-a);
    cout<<endl;
    cout<<Fact(b-a);
    cout<<endl;
}