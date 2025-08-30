#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n=2;
    int sum=0;
    while(n<=num){
        sum=sum+n;
        n=n+2;
    }
    cout<<sum<<endl;
}