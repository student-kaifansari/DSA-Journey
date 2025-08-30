#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans=0;

    //XOR ing all array elements
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    //XOR [1,n-1]
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}


int main(){
    int arr[5]={1,2,3,4,3};
    cout<<"The duplicate element is: "<<duplicate(arr,5);
}