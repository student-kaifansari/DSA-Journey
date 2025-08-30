#include<iostream>
using namespace std;


// BY ME======


// int main(){
//     int arr[5]={64,25,12,22,11};

//     for(int i=0;i<5;i++){
//         int mini=i;
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[mini]){
//                 mini=j;
//             }
//         }
//         swap(arr[i],arr[mini]);
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }



int main(){
    int arr[5]={64,25,12,22,11};

    for(int i=0;i<5;i++){
        int mini=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}