#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<2){
        cout<<"Not prime";
        return 0;
    }
    else{
        for (int i=2; i<n-1; i++){
            if(n%i==0){
                cout<<"Not prime";
                return 0;
            }
        }
        cout<<"It is a prime";
        return 0;
    }
    
}