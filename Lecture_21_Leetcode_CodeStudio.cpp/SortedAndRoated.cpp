// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,4,5,1,2};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int count=0;

//     for(int i=1;i<n;i++){
//         if(arr[i-1]>arr[i]){
//             count++;
//         }
//     }

//     if(arr[n-1]>arr[0]){
//         count++;
//     }

//     cout<< (count<=1);//1 for true and 0 for false

// }







#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int first=arr[0];

    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }

    arr[n]=first;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}