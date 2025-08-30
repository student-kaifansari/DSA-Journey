#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number please: ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"The number is not prime for "<<i<<endl;
        }
        else{
            cout<<"The number is prime for "<<i<<endl;
        }
    }
}