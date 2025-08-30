#include<iostream>
using namespace std;
int main(){
    int arr[6]={6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){//round
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{//ruk jao
                break;
            }
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}