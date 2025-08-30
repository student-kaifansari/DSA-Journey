#include<iostream>
using namespace std;

//1->Prime number
//0->Not prime number

bool isPrime(int x){

    for(int i=2;i<x;i++){
        if(x%i==0){
            //"Not Prime";
            return 0;
        }
        
    }
    return 1;

}

int main(){
    int n;
    cout<<"Enter the number here: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"is a prime no."<<endl;
    }
    else{
        cout<<"Not a prime number."<<endl;
    }
    return 0;
}