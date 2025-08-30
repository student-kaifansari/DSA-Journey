// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
}