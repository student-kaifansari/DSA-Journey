#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        char start=ch;
        for(int j=1;j<=n;j++){
            cout<<ch;
            start=start+1;
        }
        cout<<endl;
        ch++;
    }
}