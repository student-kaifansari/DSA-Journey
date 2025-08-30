#include<iostream>
using namespace std;


// Using Loop

// bool isPresent(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;

//     if(isPresent(arr,size,key)){
//         cout<<"Element is present in the array"<<endl;
//     }
//     else{
//         cout<<"Element is not present in the array"<<endl;
//     }

// }


// Using Recursion



// bool isPresent(int arr[],int n,int target){
//     if(n==0){
//         return false;
//     }
//     if(arr[0]==target){
//         return true;
//     }
//     return isPresent(arr+1,n-1,target);
// }
// int main(){
//     int arr[5]={3,5,1,2,6};
//     int size=5;
//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;

//     if(isPresent(arr,size,key)){
//         cout<<"Element is present in the array"<<endl;
//     }
//     else{
//         cout<<"Element is not present in the array"<<endl;
//     }

// }



// BY SIR

void print(int arr[],int n){
    cout<<"Size of array is "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


bool LinearSearch(int arr[],int size,int k){
    print(arr,size);
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart=LinearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=6;
    bool ans=LinearSearch(arr,size,key);

    if(ans){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array"<<endl;
    }
}