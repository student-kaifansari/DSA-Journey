#include<iostream>
using namespace std;

// void print(int arr[],int n,int start){
//     for(int i=start;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr[5]={1,4,7,8,9};
//     int size=5;
//     print(arr,size,3);
// }




// void print(int arr[],int n,int start=0){ // here start=0 by default args
//     for(int i=start;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr[5]={1,4,7,8,9};
//     int size=5;
//     print(arr,size);

//     cout<<endl;
//     print(arr,size,3);
// }


// Note: default args always follow the rightmost parameter mtlb rightmost se shuru hogi warna fr fatt jayega

// void print(int arr[],int n=0,int start){
//     for(int i=start;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr[5]={1,4,7,8,9};
//     int size=5;
//     print(arr,size);

//     cout<<endl;
//     print(arr,size,3);
// }





void print(int arr[],int n=2,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={1,4,7,8,9};
    int size=5;
    print(arr);

    cout<<endl;
    print(arr,size,3);
}