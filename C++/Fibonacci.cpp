#include<iostream>
using namespace std;
int main(){
    int n,x=0,y=1,z;
    cout<<"Enter your number: ";
    cin>>n;
    z=0;
    for(int i=3; i<=n; i++){
        z=x+y;
        x=y;
        y=z;
    }
    cout<<z;

}