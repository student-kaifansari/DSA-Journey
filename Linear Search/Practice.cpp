#include<iostream>
using namespace std;

// LINEAR SEARCH

// bool isPresent(int arr[],int target){
//     for(int i=0;i<10;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
//     int target;
//     cin>>target;
//     if(isPresent(arr,target)){
//         cout<<"Yes, it is present"<<endl;
//     }
//     else{
//         cout<<"No, it is not present"<<endl;
//     }
//     return 0;
// }



// REVERSE AN ARRAY

// void reverse(int arr[]){
//     for(int i=0;i<2;i++){
//         int temp=arr[i];
//         arr[i]=arr[3-i];
//         arr[3-i]=temp;
//     }

//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
//     return;
// }

// int main(){
//     int arr[4]={2,7,5,9};
//     reverse(arr);
// }


// OR==========


// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[6]={1,4,0,5,-2,15};
//     int brr[5]={2,6,3,9,4};
//     reverse(arr,6);
//     reverse(brr,5);
    
//     printArray(arr,6);
//     printArray(brr,5);

//     return 0;
// }



// SwapAlternate

// void swapAlternate(int arr[], int n) {
//     for(int i=0;i<n-1;i=i+2){
//         swap(arr[i],arr[i+1]);
//     }
//     return;
// }

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]={1,2,7,8,5};
//     int brr[6]={1,2,3,4,5,6};

//     swapAlternate(arr,5);
//     swapAlternate(brr,6);

//     printArray(arr,5);
//     printArray(brr,6);
//     return 0;
// }



// FIND UNIQUE ELEMENT

// int findUnique(int arr[], int n) {
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int arr[7]={3,7,2,2,7,3,4};
//     int answer=findUnique(arr,7);
//     cout<<answer;
// }


// Intersection

void Intersection(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        int val=arr1[i];
        for(int j=0;j<size2;j++){
            if(val==arr2[j]){
                cout<<val<<" ";
            }
        }
    }
    return;
}

int main(){
    int arr1[5] = {1, 2, 3,4,6};
    int arr2[3]={3,4,5};

    Intersection(arr1,arr2,5,3);
}