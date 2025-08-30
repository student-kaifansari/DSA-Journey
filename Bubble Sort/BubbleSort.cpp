#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,1,7,6,14,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){//shows rounds: 1,2,3,4,5
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}