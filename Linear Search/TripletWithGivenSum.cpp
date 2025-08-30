#include<iostream>
using namespace std;
int TripletSum(int arr[],int n){
    int sum=10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"The sum of the "<<arr[i]<<","<<arr[j]<<" and "<<arr[k]<<" is "<<sum<<endl;
                }
            }
        }
    }
    return 0;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    TripletSum(arr,5);
    return 0;
}