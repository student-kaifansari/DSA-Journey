// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {0, 1, 0, 3, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int index=0;

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]!=0){
//             arr[index]=arr[i];
//             index++;
//         }
//     }

//     while(index<n){
//         arr[index]=0;
//         index++;
//     }


//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;
// }








#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,0,3,12,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=0;// Ye variable batayega kahan pe next non-zero element ko shift karna hai.

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}