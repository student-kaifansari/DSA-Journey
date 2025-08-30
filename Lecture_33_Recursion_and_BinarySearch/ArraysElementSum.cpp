#include<iostream>
using namespace std;

// Using loop

// int arrSum(int arr[], int n) {
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;

// }
// int main(){
//     int arr[5]={3,2,5,1,6};
//     int size=5;

//     cout<<"Sum of elements of array is: "<<arrSum(arr,size);
// }


// Using Recursion


// int arrSum(int arr[], int n) {
//     int sum=0;
//     if(n==0){
//         return sum;
//     }
//     if(n>0){
//         sum+=arr[0];
//         return sum+arrSum(arr+1,n-1);
//     }
//     return sum;
// }


// int main(){
//     int arr[5]={3,2,5,2,6};
//     int size=5;

//     cout<<"Sum of elements of array is: "<<arrSum(arr,size);
// }




// OR







// int arrSum(int *arr, int n) {
//     int sum=0;
//     if(n==0){
//         return sum;
//     }
//     if(n>0){
//         sum+=arr[0];
//         return sum+arrSum(arr+1,n-1);
//     }
//     return sum;
// }


// int main(){
//     int arr[5]={3,2,5,2,6};
//     int size=5;

//     cout<<"Sum of elements of array is: "<<arrSum(arr,size);
// }





// by sir


int arrSum(int *arr, int size) {
    //BASE CASE 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart=arrSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}


int main(){
    int arr[5]={2,4,9,9,9};
    int size=5;

    int sum=arrSum(arr,size);

    cout<<"Sum of elements of array is: "<<sum<<endl;
    return 0;
}