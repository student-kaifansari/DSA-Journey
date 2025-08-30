#include <iostream>
using namespace std;

// int firstOccurrence(int arr[], int size, int key) {
//     int s = 0, e = size - 1;
//     int ans = -1;

//     while (s <= e) {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] == key) {
//             ans = mid;     // store index
//             e = mid - 1;   // search in left half
//         }
//         else if (arr[mid] > key) {
//             e = mid - 1;
//         }
//         else {
//             s = mid + 1;
//         }
//     }

//     return ans;
// }

// int lastOccurrence(int arr[], int size, int key) {
//     int s = 0, e = size - 1;
//     int ans = -1;

//     while (s <= e) {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] == key) {
//             ans = mid;     // store index
//             s = mid + 1;   // search in right half
//         }
//         else if (arr[mid] > key) {
//             e = mid - 1;
//         }
//         else {
//             s = mid + 1;
//         }
//     }

//     return ans;
// }

// int main() {
//     int arr[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
//     int size = 11;
//     int key = 3;

//     int first = firstOccurrence(arr, size, key);
//     int last = lastOccurrence(arr, size, key);

//     cout << "First occurrence of " << key << " is at index: " << first << endl;
//     cout << "Last occurrence of " << key << " is at index: " << last << endl;

//     return 0;
// }




//OR===============



#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int s, int e, int key) {
    int mid = s + (e - s) / 2;
    int ans = -1;

    if (s > e) return -1;

    if (arr[mid] == key) {
        ans = firstOccurrence(arr, s, mid - 1, key);
        return (ans != -1) ? ans : mid;
    }
    else if (arr[mid] > key) {
        return firstOccurrence(arr, s, mid - 1, key);
    }
    else {
        return firstOccurrence(arr, mid + 1, e, key);
    }
}

int lastOccurrence(int arr[], int s, int e, int key) {
    int mid = s + (e - s) / 2;
    int ans = -1;

    if (s > e) return -1;

    if (arr[mid] == key) {
        ans = lastOccurrence(arr, mid + 1, e, key);
        return (ans != -1) ? ans : mid;
    }
    else if (arr[mid] > key) {
        return lastOccurrence(arr, s, mid - 1, key);
    }
    else {
        return lastOccurrence(arr, mid + 1, e, key);
    }
}

int main() {
    int arr[11] = {1, 2, 3, 3, 4, 3, 9, 3, 2, 6, 3};
    int size = 11;
    int key = 3;

    int first = firstOccurrence(arr, 0, 10, key);
    int last = lastOccurrence(arr, 0, 10, key);

    cout << "First occurrence of " << key << " is at index: " << first << endl;
    cout << "Last occurrence of " << key << " is at index: " << last << endl;

    return 0;
}
