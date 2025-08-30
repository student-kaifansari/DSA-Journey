#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int s,int mid,int e){
    vector<int> temp;
    int i=s;
    int j=mid+1;

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){ //if you want store in descending order change <= to >=
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }


    for(int index=0;index<temp.size();index++){
        arr[s+index]=temp[index];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        // left half call
        mergeSort(arr, s, mid);

        // right half call
        mergeSort(arr, mid + 1, e);

        //merge step
        merge(arr,s,mid,e);
    }
}


int main(){
    vector<int> arr={12,31,35,8,32,17};

    mergeSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}


