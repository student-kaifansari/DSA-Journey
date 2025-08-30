#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int PageSum=0;

    for(int i=0;i<n;i++){
        if(PageSum+arr[i]<=mid){
            PageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
             }
            PageSum=arr[i];
        }
    }
    return true;
}

int main(){
    int arr[4]={10,20,30,40};
    int s=0;
    int sum=0;
    
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;

    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,4,2,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans<<endl;
}