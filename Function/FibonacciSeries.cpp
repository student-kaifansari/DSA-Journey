#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=2;i<n;i++){
        int fibo=a+b;
        a=b;
        b=fibo;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<"The "<<n<<"th term of the fibonacci series is: "<<ans<<endl;
    return 0;
}