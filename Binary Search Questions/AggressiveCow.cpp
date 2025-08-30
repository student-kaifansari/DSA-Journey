#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[],int k,int mid){
    int countCow=1;
    int lastPosition=stalls[0];

    for(int i=0;i<5;i++){
        if(stalls[i]-lastPosition>=mid){
            countCow++;
            if(countCow==k){
                return true;
            }
            lastPosition=stalls[i];
        }
    }
    return false;
}

int main(){
    int stalls[5]={4,2,1,3,6};
    int s=0;
    sort(stalls,stalls+5);

    int maxi=-1;
    for(int i=0;i<5;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(isPossible(stalls,2,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans<<endl;
}