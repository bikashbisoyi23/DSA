#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the eliments of the array: ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }

    // cout<<sizeof(arr)/sizeof(arr[0]);

    cout<<"Your Array is:";
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans = INT_MIN;

    for(int i=0; i<=4; i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<"Maximum Eliment is:"<<ans<<endl;
     int min = INT_MAX;
    for(int i=0; i<=4; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum Eliment is:"<<min<<endl;

    int sum=0;
    for(int i=0; i<=4; i++){
        sum+=arr[i];
    }

    cout<<"Sum of eliments are:"<<sum;
    return 0;
}