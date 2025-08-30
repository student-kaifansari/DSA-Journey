// #include<iostream>
// using namespace std;
// bool intersection(int arr[],int brr[],int m,int n){
//     for(int i=0;i<m;i++){
//         int element=arr[i];
//         for(int j=0;j<n;j++){
//             if(element==brr[j]){
//                 return true;
//             }
//         }
//     }
//     return false;

// }

// int main(){
//     int arr1[5]={1,2,3,3,4};
//     int arr2[2]={3,4};
//     bool found=intersection(arr1,arr2,3,2);
//     if(found){
//         cout<<"The intersection element is found "<<endl;
//     }else{
//         cout<<"The intersection element is not found"<<endl;
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int intersection(int arr[],int brr[],int m,int n){
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr[i]==brr[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }else if(arr[i]<brr[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;

}

int main(){
    int arr1[5]={1,2,3,3,4};
    int arr2[2]={3,4};
    bool found=intersection(arr1,arr2,3,2);
    if(found){
        cout<<"The intersection element is found "<<endl;
    }else{
        cout<<"The intersection element is not found"<<endl;
    }
    return 0;
}