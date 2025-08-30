#include<iostream>
using namespace std;

// void reachHome(int src,int dest){
//     cout<<"Source "<<src<<" Destination "<<dest<<endl;
//     //Base case
//     if(src==dest){
//         cout<<"I m reached"<<endl;
//         return;
//     }

//     //processing-ek step aage badh jao
//     src++;
//     //recursive call
//     reachHome(src,dest);

// }

// int main(){
//     int dest=10;
//     int src=1;

//     cout<<endl;
//     reachHome(src,dest);
// }





int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }


    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}


int main(){
    int n;
    cin>>n;

    int fib=fibonacci(n);
    cout<<fib<<endl;

}