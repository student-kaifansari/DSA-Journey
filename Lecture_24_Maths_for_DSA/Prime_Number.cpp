#include<iostream>
using namespace std;

// BY me

// int main(){
//     int n;
//     cout<<"Enter the number that you want to check prime or not: ";
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Not prime at "<<i<<endl;
//         }
//         else{
//             cout<<"Prime"<<endl;
//         }
//     }
// }






//By me 

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

    if(isPrime(n)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }

}


// time complexity will be O(n) acc to above approach 