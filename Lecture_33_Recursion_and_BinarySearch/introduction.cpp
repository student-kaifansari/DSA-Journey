// to check wheather an array is sorted or not

#include<iostream>
using namespace std;

// bool isSorted(int arr[], int n) {
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     // int arr[6]={2,4,6,9,11,13};
//     int arr[6]={2,4,6,9,19,13};


//     if(isSorted(arr,6)){
//         cout<<"Array is sorted in ascending order"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted in ascending order"<<endl;
//     }
    
// }



// NOW BY RECUSION

bool isSorted(int arr[], int size) {
    if(size==1 || size==0){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    // int arr[6]={2,4,6,9,11,13};
    int arr[6]={2,4,6,9,19,13};

    bool ans=isSorted(arr,6);


    if(ans){
        cout<<"Array is sorted in ascending order"<<endl;
    }
    else{
        cout<<"Array is not sorted in ascending order"<<endl;
    }
    
}