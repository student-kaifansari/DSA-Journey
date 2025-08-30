// convert the temperature from celcius to fahrenheit

#include<iostream>
using namespace std;
int main(){
    int celcius;
    cout<<"Enter the celcius value:";
    cin>>celcius;
    int fahrenheit=((9*celcius)/5)+32;
    cout<<"The fahrenheit value is "<<fahrenheit<<endl;
}