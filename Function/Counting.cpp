#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the number where you want to print the counting: ";
    cin>>n;
    printCounting(n);
    return 0;
}