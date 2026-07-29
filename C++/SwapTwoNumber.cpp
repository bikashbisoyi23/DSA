#include<iostream>
using namespace std;

void Swap(int&a, int&b){
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float&d, float&e){
    float f;
    f=d;
    d=e;
    e=f;
}
int main(){
    int a,b;
    cin>>a>>b;
    Swap(a,b);

    cout<<a<<" "<<b<<endl;

    float d,e;
    cin>>d>>e;
    Swap(d,e);

    cout<<d<<" "<<e<<endl;


}
