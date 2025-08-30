#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int arr1[]={1,2,3,4};//n
    int arr2[]={5};//m
    int arr3[4]={};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    int i=n-1;
    int j=m-1;
    vector<int>ans;
    int carry=0;

    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;

        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
        j--;
    }

    //first case
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
    }

    //second case
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        j--;
    }

    ///third case
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    //reverse
    reverse(ans.begin(),ans.end());

    for(int i=0;i<n;i++){
        cout<<ans<<" ";
    }

}
