#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<endl<<endl<<"Sab sahi chal raha hai"<<endl<<endl;

    cout<<"Printing p : "<<p<<endl;//content(value) of p
    cout<<"Address of p : "<<&p<<endl;//address of p
    cout<<*p2<<endl;//content of p


    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    return 0;
}