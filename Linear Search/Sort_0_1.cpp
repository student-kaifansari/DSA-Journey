// #include<iostream>
// using namespace std;
// void Sort_0_1(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         while(arr[i]==0 && i<j){
//             i++;
//         }
//         while(arr[j]==1 && i<j){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }

// }
// int main(){
//     int arr[6]={0,1,1,0,0,1};
//     int size=6;
//     Sort_0_1(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }




/*Doubt ise poochna hai kisi se aur clear krna hai doubt*/


// #include<iostream>
// using namespace std;
// void Sort_0_1(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>0;j--){
//             if(arr[i]==0 && arr[j]==1){
//                 i++;
//                 j--;
//             }
//             else if(arr[i]!=0 && arr[j]!=1){
//                 swap(arr[i],arr[j]);
//             }
//             if(i>=j){
//                 break;
//             }
//         }
//     }

// }
// int main(){
//     int arr[6]={0,1,1,0,0,1};
//     int size=6;
//     Sort_0_1(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }





// #include<iostream>
// using namespace std;

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

// }

// void SortOne(int arr[],int n){
//     int left=0;
//     int right=n-1;

//     int step=0;
//     while(left<right){
//         cout<< "Step: "<<step++<<endl;
//         printArray(arr,n);
//         cout<<endl;
//         while(arr[left]==0){
//             left;
//         }
//         while(arr[right]==1){
//             right--;
//         }
//         //agar yaha phuch gye ho to iska mtlb ye hai ki arr[i]==1 and arr[j]==0
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
// }
// int main(){
//     int arr[8]={1,1,0,0,0,0,1,0};

//     SortOne(arr,8);
//     printArray(arr,8);

//     return 0;

// }














/*By Sir*/



#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void SortOne(int arr[],int n){
    int left=0;
    int right=n-1;

    while(left<right){

        while(arr[left]==0 && left<right){
            left;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        //agar yaha phuch gye ho to iska mtlb ye hai ki arr[i]==1 and arr[j]==0
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    SortOne(arr,8);
    printArray(arr,8);

    return 0;

}