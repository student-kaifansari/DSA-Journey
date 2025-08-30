#include<iostream>
using namespace std;

// int pivotElement(int arr[],int s,int e){
    
//     while(s<e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]>arr[e]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//     }

//     return s;
// }
// int main(){
//     int arr[5]={7,9,10,2,3};
//     int size=5;

//     cout<<pivotElement(arr,0,size-1);
// }




// Using Recursion


int pivotElement(int arr[], int s, int e) {
    if (s == e) {
        return s;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] > arr[e]) {
        return pivotElement(arr, mid + 1, e);
    } else {
        return pivotElement(arr, s, mid);
    }
}

int main() {
    int arr[5] = {7, 9, 1, 2, 3};
    int size = 5;

    int index = pivotElement(arr, 0, size - 1);
    cout << "Pivot index: " << index << ", Pivot value: " << arr[index] << endl;

    return 0;
}
