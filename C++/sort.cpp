#include<iostream>
using namespace std;

int main(){
    int arr[6]={5,8,1,4,3,6};
    for(int i=5; i>0; i--){
        int index=i;
        for(int j=i; j>=0; j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}