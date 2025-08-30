#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){

    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;      // Key found, but continue searching to the right.
            s = mid + 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;    // Search in the right half.
        }
        else if (key < arr[mid]) {
            e = mid - 1;    // Search in the left half.
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main(){
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<"First occurrence of 3 is at index "<<firstOcc(even,11,3)<<endl;
    cout<<"Last occurrence of 3 is at index "<<lastOcc(even,11,3)<<endl;

    return 0;
}

