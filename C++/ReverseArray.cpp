#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter your Array: ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }

    cout<< "Your Original array is: ";
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i=0, j=4;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<< "Reversed5 array is: ";
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }



}