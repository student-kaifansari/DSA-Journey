// #include<iostream>
// using namespace std;

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// void SwapAlternate(int arr[],int n){

//     for(int i=0;i<n;i=i+2){
//         if(i+1<n){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// int main(){
//     int odd[5]={1,2,7,8,5};
//     int even[6]={1,2,3,4,5,6};

//     SwapAlternate(odd,5);
//     SwapAlternate(even,6);

//     printArray(odd,5);
//     printArray(even,6);

// }




#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void SwapAlternate(int arr[],int n){

    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}

int main(){
    int odd[5]={1,2,7,8,5};
    int even[6]={1,2,3,4,5,6};

    SwapAlternate(odd,5);
    SwapAlternate(even,6);

    printArray(odd,5);
    printArray(even,6);

}