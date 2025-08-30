/*By ME===================*/

// #include<iostream>
// using namespace std;
// void BinarySearch(int arr[],int n,int target){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int mid=(start+end)/2;

//         if(arr[mid]==target){
//             cout<<"Element is found at index "<<mid<<endl;
//             return;
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     cout<<"Element is not found"<<endl;
// }
// int main(){
//     int size=6;
//     int arr1[size]={1,3,5,7,9,11};
//     int key;
//     cout<<"Enter the key which you want to search in the array: ";
//     cin>>key;
//     BinarySearch(arr1,size,key);
//     return 0;
// }

/*BY SIR===========*/

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start)) / 2;
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 3, 5, 7, 9, 11};
    int odd[5] = {2, 4, 6, 8, 10};

    int evenindex = BinarySearch(even, 6, 9);
    cout << "Index of 9 is " << evenindex << endl;

    int oddindex = BinarySearch(odd, 5, 1);
    cout << "Index of 8 is " << oddindex << endl;

    return 0;
}