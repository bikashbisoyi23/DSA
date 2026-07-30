#include<iostream>
using namespace std;

char SmallToCapital(char name){
    char ans=name-'a'+'A';
    return ans;
}

int main(){
    char character;
    cout<<"Enter your Small character: ";
    cin>>character;
    cout<<SmallToCapital(character);
}