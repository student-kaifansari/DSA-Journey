#include<iostream>
using namespace std;


int largestRowSum(int arr[][3],int row ,int col){
    int maxi=INT16_MIN;
    int rowIndex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][3];

    //input
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //print
    cout<<"Printing the arrray: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Max row is at index: "<<largestRowSum(arr,3,3)<<endl;
    return 0;
}