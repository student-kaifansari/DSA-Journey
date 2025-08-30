#include<iostream>
using namespace std;


/*BY ME=============*/


// void checkTargetValue(int arr[],int n){
//     int target=1;

//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             cout<<"The target value "<<arr[i]<<" present in the array at the position "<<i<<endl;
//         }
//     }
// }

// int main(){
//     int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

//     //whether 1 is present in it or not
//     checkTargetValue(arr,10);

//     return 0;
// }

/*BY SIR============*/

// bool search(int arr[],int n,int target){

//     //traverse the whole array
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

//     cout<<"Enter the element to search for "<<endl;
//     int key;
//     cin>>key;
//     bool found=search(arr,10,key);

//     if(found){
//         cout<<"key is present"<<endl;
//     }else{
//         cout<<"key is not present"<<endl;
//     }

//     return 0;
// }