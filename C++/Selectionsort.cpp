#include<iostream>
using namespace std;


void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int index=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
//     int arr[6]={5,8,1,4,3,6};
//     for(int i=0; i<5; i++){
//         int index=i;
//         for(int j=i; j<6; j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }

//     for(int i=0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }



// Using user input array
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[200];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Call the Function

    selectionsort(arr,n);

}