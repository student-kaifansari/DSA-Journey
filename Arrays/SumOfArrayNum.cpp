// #include<iostream>
// using namespace std;
// int printSumOfArray(int arr[],int n){

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"The sum of the number of array: "<<sum;

// }

// int main(){
//     int arr[5]={2,7,1,-4,11};

//     printSumOfArray(arr,5);
//     return 0;
// }


/*By taking the input number in array*/
/*When return type is void*/

// #include<iostream>
// using namespace std;
// void printSumOfArray(int arr[],int n){

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"The sum of the number of array: "<<sum;
// }

// int main(){
//     //int arr[5]={2,7,1,-4,11};
//     int size;
//     cout<<"Enter the size of array: ";
//     cin>>size;
//     int arr[size];
    
//     cout<<"Input the array here:";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     printSumOfArray(arr,5);
//     return 0;
// }


/*When return type is int*/


#include<iostream>
using namespace std;
int printSumOfArray(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    //int arr[5]={2,7,1,-4,11};
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    
    cout<<"Input the array here:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans=printSumOfArray(arr,5);
    cout<<"The sum of the number of array: "<<ans;
    return 0;
}