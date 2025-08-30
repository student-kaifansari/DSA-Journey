#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

// }


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}