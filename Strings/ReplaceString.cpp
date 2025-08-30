#include<iostream>
using namespace std;
int main(){
    string ch;
    cout<<"Enter the string: ";
    getline(cin,ch);

    cout<<"Original: "<<ch<<endl;

    string result="";

    for(int i=0;ch[i]!='\0';i++){
        if (ch[i]==' '){
            result+="@40";
        }
        else{
            result+=ch[i];
        }
    }

    cout<<"Modified: "<<result<<endl;
}









