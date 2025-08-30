#include<iostream>
using namespace std;

// Min & Max

// int getMin(int arr[],int size){
//     int min=INT16_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min;
// }

// int getMax(int arr[],int size){
//     int max=INT16_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int size=4;
//     int arr[size]={4,12,8,10};
//     int ans1=getMin(arr,size);
//     int ans2=getMax(arr,size);
//     cout<<ans1<<endl;
//     cout<<ans2<<endl;
    
// }


// PRINT SUM OF ALL ELEMENTS IN AN ARRAY

int sumOfElements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"Sum of All Elements of an array is: "<<sumOfElements(arr,size)<<endl;
}