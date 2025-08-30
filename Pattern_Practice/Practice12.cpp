#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         char ch='A';
//         int j=1;
//         while(j<=n){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char ch='A';
//     while(i<=n){
//         char val=ch;
//         int j=1;
//         while(j<=n){
//             cout<<val;
//             val++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }








int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}















