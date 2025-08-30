#include<iostream>
using namespace std;
// void func(int a,int b){
//     a++;
//     b++;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }
// int main(){
//     int a=1,b=2;
//     func(a,b);
// }



// int main(){
//     int a=1,b=2;
//     int ans=0;
//     // if(a>b){
//     //     ans=a;
//     // }
//     // else{
//     //     ans=b;
//     // }

//     //oR
//     // we can use tertiary operator
//     ans=a>b? a:b;

//     a=a+3;
//     b=b+1;

//     ans=a>b? a:b;

//     // here we are apply the codition again and again to check the value of a and b which is not good for readability so we use function 

//     return 0;
// }







inline int getMax(int& a,int& b){

    return (a>b)? a:b;
}


int main(){
    int a=1,b=2;
    int ans=0;
    
    ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;

    ans=getMax(a,b);
    cout<<ans<<endl;

    return 0;
}