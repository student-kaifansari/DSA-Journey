#include<iostream>
using namespace std;
int main(){
    // input a string
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    cout<<"Original: "<<s<<endl;

    // input a substring
    string s1;
    cout<<"Enter the substring: ";
    getline(cin,s1);

    cout<<"Substring: "<<s1<<endl;

    // traverse the string

    string result="";

    for(int i=0;s[i]!='\0';i++){
        result+=s[i];opl;
        
    }
}