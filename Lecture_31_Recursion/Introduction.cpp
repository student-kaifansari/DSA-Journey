#include<iostream>
using namespace std;

// int factorial(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }

//     int smallerProblem=factorial(n-1);
//     int biggerProblem=n*smallerProblem;

//     return biggerProblem;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
// }





// int factorial(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }

//     return n * factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
// }





// int factorial(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }

//     int smallerProblem=factorial(n-1);
//     int biggerProblem=n*smallerProblem;

//     return biggerProblem;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
// }





// int power(int n){
//     // base case
//     if(n==0){
//         return 1;
//     }

//     //recursive relation

//     int smallerProblem=power(n-1);
//     int biggerProblem=2*smallerProblem;

//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=power(n);

//     cout<<ans<<endl;
// }





// int power(int n){
//     // base case
//     if(n==0){
//         return 1;
//     }

//     //recursive relation
//     return 2*power(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=power(n);

//     cout<<ans<<endl;
// }




// Tail recursion
// void printCount(int n){
//     // base case
//     if (n==0){
//         return;
//     }

//     cout<<n<<endl;

//     // recursive relation
//     printCount(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     printCount(n);
// }




// Head recursion
void printCount(int n){
    // base case
    if (n==0){
        return;
    }
    // recursive relation
    printCount(n-1);

    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    printCount(n);
}