#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     int i=1;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         int j=1;
//         int value=count;
//         while(j<=i){
//             cout<<value;
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int val=count;
//         while(j<=i){
//             cout<<val;
//             val--;
//             j++;
//         }
//         cout<<endl;
//         count++;
//         i++;
//     }
// }




int main(){
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        //print 1st triangle(space)
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print 2nd triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //print 3rd triangle
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
    }
}