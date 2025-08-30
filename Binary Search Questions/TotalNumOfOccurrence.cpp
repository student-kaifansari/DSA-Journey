// #include<iostream>
// using namespace std;

// int firstOcc(int arr[],int size,int key){

//     int s=0,e=size-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if (arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//     }
//     return -1;
// }

// int lastOcc(int arr[],int size,int key){
//     int s=0;
//     int e=size-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//     }
//     return -1;
// }

// int totalOcc(int arr[],int n,int key){

//     int totaNumOfOcc=(lastOcc(arr,7,3)-firstOcc(arr,7,3))+1;
// }
// int main(){
//     int odd[7]={1,2,3,3,3,3,5};
//     cout<<"First occurrence of 3 is at index "<<firstOcc(odd,7,3)<<endl;
//     cout<<"Last occurrence of 3 is at index "<<lastOcc(odd,7,3)<<endl;
//     cout<<"Total number of occurrence "<<totalOcc(odd,7,3)<<endl;

//     return 0;
// }

// BY LINEAR SEARCH

// #include<iostream>
// using namespace std;

// int countOcc(int arr[],int n,int key){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int arr[7]={1,2,3,3,3,3,5};

//     cout<<countOcc(arr,7,3);
//     return 0;
// }





#include <iostream>
using namespace std;

int leftSum(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = (s + (e - s) / 2);
    
}

int main()
{
    int nums[6] = {1, 7, 3, 6, 5, 6};
    int ans=leftSum(nums,6);
    cout<<ans;
    return 0;
}


















































