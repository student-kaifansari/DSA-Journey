#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter the number of rotation: ";
    cin>>k;
    int index=0;
    
    int temp[n];

    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }

}