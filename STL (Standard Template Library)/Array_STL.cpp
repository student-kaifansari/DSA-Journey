#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 4> a={1,2,3,4};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<"Element at 2nd Index->"<<a.at(2)<<endl;
    cout<<"Empty or Not-> "<<a.empty()<<endl;

    cout<<"Front Element-> "<<a.front()<<endl;
    cout<<"Back Element-> "<<a.back()<<endl;
}