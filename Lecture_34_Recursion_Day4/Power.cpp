#include<iostream>
using namespace std;

// Approach-1

// int main(){
//     int base;
//     cin>>base;

//     cout<<endl;

//     int power;
//     cin>>power;

//     int ans=1;

//     for(int i=1;i<=power;i++){
//         ans=base*ans;
//     }

//     cout<<ans<<endl;
// }



// Approach-2

int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans=power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return (ans*ans)*a;
    }
}


int main(){
    int a,b;
    cin>>a>>b;

    int ans=power(a,b);

    cout<<"Answer is "<<ans<<endl;
}


// homework insertion sort, selection sort