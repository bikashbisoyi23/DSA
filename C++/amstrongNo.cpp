#include<iostream>
#include<cmath>
using namespace std;


int digit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
bool CheakAmstrong(int n, int digit){
    int rem,ans=0,num=n;
    while(num){
        rem=num%10;
        num=num/10;
        ans+=round(pow(rem,digit));
    }
    if(ans==n)
    return 1;
    else
    return 0;
}

int main(){
    int a;
    cout<<"Enter the Number: ";
    cin>>a;
    int digi= digit(a);
    cout<<CheakAmstrong(a,digi);
}