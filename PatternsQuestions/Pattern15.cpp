#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A';
        while(j<=i){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}
