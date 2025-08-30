#include<iostream>
using namespace std;

// int peakElement(int arr[], int s, int e, int n){
//     if(n <= 0){
//         return -1;
//     }
//     if(n == 1){
//         return 0;
//     }

//     while(s < e){
//         int mid = s + (e - s) / 2;

//         if(arr[mid] < arr[mid + 1]){
//             s = mid + 1;
//         } else {
//             e = mid;
//         }
//     }

//     return s;
// }

// int main(){
//     int arr[4] = {3, 4, 5, 1};
//     int size = 4;

//     int index = peakElement(arr, 0, size - 1, size);
//     cout << "Peak element is at index: " << index << " and value: " << arr[index] << endl;

//     return 0;
// }



//By recursion
#include<iostream>
using namespace std;

int peakElement(int arr[], int s, int e) {
    // Base case
    if (s == e) {
        return s;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] < arr[mid + 1]) {
        return peakElement(arr, mid + 1, e);
    } else {
        return peakElement(arr, s, mid);
    }
}

int main() {
    int arr[4] = {3, 4, 5, 1};
    int size = 4;

    int index = peakElement(arr, 0, size - 1);
    cout << "Peak element is at index: " << index << " and value: " << arr[index] << endl;

    return 0;
}


// Priyanshu Raj