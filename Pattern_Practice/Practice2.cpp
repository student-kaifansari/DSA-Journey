#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<count;
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }
}