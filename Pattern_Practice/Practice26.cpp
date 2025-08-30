#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        //1st triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        //2nd triangle
        int start=i-1;
        while(start){
            cout<<"*";
            start++;
        }
        cout<<endl;
        i++;
    }
}