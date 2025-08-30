#include<iostream>
using namespace std;


bool isPrime(int num){
    if (num==1){
        return false;
    }

    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int c=0;

    for(int i=2;i<n;i++){
        if(isPrime(i)){
            c++;
        }
    }
    cout<<c<<endl;
}


// tc:O(n2) to overcome it we go to theorem sieve of eratosthenes
