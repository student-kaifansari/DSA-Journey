#include<iostream>
using namespace std;


// bool isPresent(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         int mid=start+(end-start)/2;

//         if(arr[mid]==key){
//             return true;
//         }

//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[6]={2,4,6,10,14,16};
//     int size=6;
    

//     int target;
//     cout<<"Enter the target element: ";
//     cin>>target;

//     if(isPresent(arr,size,target)){
//         cout<<"Target key is found"<<endl;
//     }
//     else{
//         cout<<"Target key is not found"<<endl;
//     }
    
// }



// Using Recursion

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int start,int end,int key){
    cout<<endl;
    print(arr,start,end);

    //base case
    
    // element not found
    if(start>end){
        return false;
    }
    
    int mid=start+(end-start)/2;
    cout<<"Value of arr mid is "<<arr[mid]<<endl;
    //element found
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        binarySearch(arr,mid+1,end,key);
    }

    else{
        binarySearch(arr,start,mid-1,key);
    }

}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;


    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    if(binarySearch(arr,0,5,target)){
        cout<<"Target key is found"<<endl;
    }
    else{
        cout<<"Target key is not found"<<endl;
    }
    
}
