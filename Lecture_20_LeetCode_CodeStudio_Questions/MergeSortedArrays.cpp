// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int> v1={1,3,5,7,9};
//     vector<int> v2={2,4,6};
//     vector<int> merge;

//     int i=0;
//     int j=0;

//     while(i<v1.size() && j<v2.size()){
//         if(v1[i]<v2[j]){
//             merge.push_back(v1[i++]);
//         }
//         else{
//             merge.push_back(v2[j++]);
//         }
//     }

//     while(i < v1.size()){
//         merge.push_back(v1[i++]);
//     }


//     while(j < v2.size()){
//         merge.push_back(v2[j++]);
//     }

//     for(int i=0;i<merge.size();i++){
//         cout<<merge[i]<<" ";
//     }

// }






#include<iostream>
using namespace std;

void merge(int a1[],int n, int a2[],int m,int a3[]){
    int i=0,j=0;
    int k=0;

    while(i<n && j<m){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            k++;
            i++;
        }
        else{
            a3[k]=a2[j];
            k++;
            j++;
        }
    }

    //copy kr do first array element ko

    while(i<n){
        a3[k]=a1[i];
        k++;
        i++;
    }

    while(j<n){
        a3[k]=a2[j];
        k++;
        j++;
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}


int main(){
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8]={0};

    merge(a1,5,a2,3,a3);

    print(a3,8);

    return 0;
}