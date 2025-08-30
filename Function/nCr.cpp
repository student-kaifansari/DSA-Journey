#include<iostream>
using namespace std;

int factorial(int s){
    int fact=1;
    for(int i=1;i<=s;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int x,int y){
    int num=factorial(x);
    int denom=factorial(y)*factorial(x-y);
    int ans=num/denom;
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is: "<<nCr(n,r)<<endl;
}