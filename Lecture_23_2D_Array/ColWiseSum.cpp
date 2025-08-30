#include<iostream>
using namespace std;

void printSum(int arr[][3],int row,int col){
    for(int j=0;j<3;j++){//col
        int sum=0;
        for(int i=0;i<3;i++){//row
            sum+=arr[i][j];
        }
    cout<<sum<<" ";
    }
}

int main(){
    int arr[3][3];

    //input
    cout<<"Enter the element-> "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //print
    cout<<"Printing the array-> "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,3);
}