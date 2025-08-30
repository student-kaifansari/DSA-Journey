#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    for(int i=0;s[i]!='\0';){
        if(s[i]=='*'){
            s.erase(i-1,2);
            if(i>0){
                i--;
            }
        }
        else{
            i++;
        }
    }

    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
}