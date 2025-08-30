#include<iostream>
using namespace std;
int Find_AP(int x){
    int AP=(3*x+7);
    return AP;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int finalAns=Find_AP(n);
    cout<<"The A.P. of the number is: "<<finalAns<<endl;
    
}