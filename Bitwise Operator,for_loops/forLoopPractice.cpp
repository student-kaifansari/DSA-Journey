// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         cout<<i<<endl;
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     for(;i<=n;i++){
// //         cout<<i<<endl;
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     for(;i<=n;){
// //         cout<<i<<endl;
// //         i++;
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     for(;;){
// //         if(i<=n){
// //             cout<<i<<endl;
// //         }
// //         else{
// //             break;
// //         }
// //         i++;
// //     }
// // }

// // print sum of 1 to n numbers
// // int main(){
// //     int n;
// //     cin>>n;
// //     int sum=0;
// //     for(int i=0;i<=n;i++){
// //         sum+=i;
// //     }
// //     cout<<"The sum of 1 to "<<n<<" numbers is: "<<sum<<endl;
// // }

// // print fibonacci series
// //  int main(){
// //      int n;
// //      cout<<"Enter the number:";
// //      cin>>n;
// //      int a=0,b=1;
// //      int fibo=0;
// //      cout<<"The fibonacci series are: "<<a <<" " <<b;
// //      for(int i=0;i<n;i++){
// //          fibo=a+b;
// //          a=b;
// //          b=fibo;
// //          cout<<" "<<fibo;
// //      }
// //  }

// // print prime number
// // int main(){
// //     int n;
// //     cin>>n;
// //     bool isPrime=true;
// //     for(int i=2;i<n;i++){
// //         if(n%2==0){
// //             isPrime=false;
// //             break;
// //         }
// //     }
// //     if(isPrime==0){
// //         cout<<"The number is not a prime number"<<endl;
// //     }
// //     else{
// //         cout<<"The number is a prime number"<<endl;
// //     }
// // }

// // int main(){
// //     for(int i=0;i<5;i++){
// //         cout<<i<<" ";
// //         i++;
// //     }
// // }

// // int main(){
// //     for(int i=0;i<5;i--){
// //         cout<<i<<" ";
// //         i++;
// //     }
// // }

// // int main(){
// //     for(int i=0;i<5;i++){
// //         for(int j=1;j<=5;j++){
// //             if(i+j==10){
// //                 break;
// //             }
// //             cout<<i<<" "<<j<<endl;
// //         }
// //     }
// // }



#include <iostream>
using namespace std;

int checkLength(int n){
    int count=0;
    if(n==0){
        return 0;
    }
    while(n>0){
        int result=n%10;
        count+=1;
        n/=10;
    }

    return count;
}

int main() {
    int n;
    cin>>n;
    
    cout<<checkLength(n)<<endl;
    return 0;
}




