// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }



// Fibonacci series=========

// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;
//     int a=0,b=1;
//     cout<<a<<" "<<b<<" ";
//     int fibo=0;
//     for(int i=1;i<=n;i++){
//         fibo=a+b;
//         cout<<fibo<<" ";
//         a=b;
//         b=fibo;
//     }

// }





//prime number========

// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;
//     bool isPrime=1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"Number is not prime"<<endl;
//     }else{
//         cout<<"Number is prime"<<endl;
//     }
    
// }



// int main(){
//     for(int i=0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }




// int main(){
//     for(int i=0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }


// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }


// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }




// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j==10){
//                 break;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }








#include<iostream>
using namespace std;

int main(){
    int arr[] {40, 50, 60, 70, 80, 90, 100};
    for (auto ele: arr)
        cout <<ele<< " ";
    return 0;
}





//  Line-by-line Explanation:
// cpp
// Copy
// Edit
// int arr[] {40, 50, 60, 70, 80, 90, 100};
// This creates a list of numbers called arr.

// The list has these numbers:
// 40, 50, 60, 70, 80, 90, 100.

// cpp
// Copy
// Edit
// for (auto element: arr)
// This line means:
// "Go through each number in the list one by one."

// The word element will hold each number during the loop.

// cpp
// Copy
// Edit
// cout << element << " ";
// This prints the number stored in element, followed by a space.

// 🔹 Final Output:
// Copy
// Edit
// 40 50 60 70 80 90 100
// The program prints all the numbers in the list, one after another, with spaces in between.



























