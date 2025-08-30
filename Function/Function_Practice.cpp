// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<"Answer is "<<ans<<endl;
//     return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=pow(a,b);
//     }
//     cout<<ans;
//     return 0;
// }

// FUNCTION

// #include<iostream>
// using namespace std;

// int power(int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int a ,b;
//     cin>> a >> b;
//     int answer=power(a,b);
//     cout<<"Answer is "<<answer<<endl;

//     int c ,d;
//     cin>> c >> d;
//     answer=power(c,d);
//     cout<<"Answer is "<<answer<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int power(){
//     int a ,b;
//     cin>> a >> b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int answer=power();
//     cout<<"Answer is "<<answer<<endl;

//     answer=power();
//     cout<<"Answer is "<<answer<<endl;
//     return 0;
// }

// Print even or odd
// #include <iostream>
// using namespace std;

// bool isEven(int num)
// {
//     if (num % 2 == 0)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (isEven(n))
//     {
//         cout << "Number is even" << endl;
//     }
//     else
//     {
//         cout << "Number is odd" << endl;
//     }
// }



// OR


// #include <iostream>
// using namespace std;

// bool isEven(int num)
// {
//     if (num & 1)
//     {
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (isEven(n))
//     {
//         cout << "Number is even" << endl;
//     }
//     else
//     {
//         cout << "Number is odd" << endl;
//     }
// }



// nCr 

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int nCr(int n,int r){
//     int numer=factorial(n);
//     int deno=factorial(r)*factorial(n-r);
//     return numer/deno;
// }


// int main(){
//     int n;
//     cin>>n;
//     int r;
//     cin>>r;
//     cout<<"Answer is "<<nCr(n,r)<<endl;
// }


// PRINT COUNTING

// #include<iostream>
// using namespace std;
// //function signature
// void printCounting(int num){
//     //function body
//     for(int i=1;i<=num;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     //function call
//     printCounting(n);
//     return 0;
// }



// CHECK A NUMBER IS PRIME OR NOT

// #include<iostream>
// using namespace std;
// bool isPrime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"Number is prime"<<endl;
//     }
//     else{
//         cout<<"Number is not prime"<<endl;
//     }
//     return 0;
// }




//A.P

// #include<iostream>
// using namespace std;
// int AP(int n){
//     int answer=((3*n)+7);
//     return answer;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<AP(n)<<endl;
// }


// Total no of bits

// #include<iostream>
// using namespace std;
// int TotalNoOfBits(int n){
//     int count=0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int second(int a,int b){
//     int forA=TotalNoOfBits(a);
//     int forB=TotalNoOfBits(b);
//     return forA+forB;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<second(a,b)<<endl;
// }



// PRINT nTH FIBONACI NUMBER

#include<iostream>
using namespace std;
int printFibo(int n){
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    int fibo;
    for(int i=2;i<n;i++){
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return fibo;
}
int main(){
    int n;
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci number is "<<printFibo(n)<<endl;
}




























