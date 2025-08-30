#include<iostream>
using namespace std;
                    
int main(){

    int num=5;
    int a=num;
    cout<<"a Befor:"<<num<<endl;//5
    a++;
    cout<<"a After:"<<num<<endl;//5
    
    int *p=&num;
    cout<<"Befor:"<<num<<endl;//5
    (*p)++;//5++=6
    cout<<"After:"<<num<<endl;//6

    //copying a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    //important concept

    int i=3;
    int *t=&i;
    //cout<<*t++<<endl;//yaha par (*t)++ ye likhna accha practice hai but ham aise bhi likh skkte hai 
    *t=*t+1;
    cout<<(*t)<<endl;
    cout<<"Before t : "<<t<<endl;
    t=t+1;
    cout<<"After t : "<<t<<endl;

}