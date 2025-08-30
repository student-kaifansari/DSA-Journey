#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"this is a lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"this is a upper case"<<endl;
    }
    else if(ch>='0' and ch<='9'){
        cout<<"this is a numeric"<<endl;
    }
    else{
        cout<<"this is a special type character";
    }
}