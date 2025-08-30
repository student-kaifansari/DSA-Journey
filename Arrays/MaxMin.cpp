#include<iostream>
using namespace std;

int getMax(int num[],int n){

    int maxi=INT16_MIN;
    for(int i=0;i<n;i++){
        // if(num[i]>maxi){
        //     maxi=num[i];
        // }
        //OR========
        // inbuilt function
        maxi=max(maxi,num[i]);
    }

    //returning max value
    return maxi;

}

int getMin(int num[],int n){

    int mini=INT16_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<mini){
            mini=num[i];
        }
        // OR========
        // inbuilt function
        // mini=min(mini,num[i]);
    }

    //returning max value
    return mini;

}

int main(){
    int size;
    cout<<"Enter the size please: ";
    cin>>size;
    int num[100];

    //taing input the array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum value is: "<<getMax(num,size)<<endl;
    cout<<"Minimum value is: "<<getMin(num,size)<<endl;

}