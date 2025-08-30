#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int m;
    int n;
    cout<<"Enter the m: ";
    cin>>m;
    n=2*m+1;
    int arr[n];

    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unique element of the array is: "<<findUnique(arr,n);

    return 0;
}