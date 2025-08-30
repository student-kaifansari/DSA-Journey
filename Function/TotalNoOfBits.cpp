#include<iostream>
using namespace std;

int setBitsX(int x){
    int count=0;
    while(x!=0){
        if(x&1){
            count++;
        }
        x=x>>1;
    }
    return count;
}

int setBitsY(int y){
    int count=0;
    while(y!=0){
        if(y&1){
            count++;
        }
        y=y>>1;
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans1=setBitsX(a);
    int ans2=setBitsY(b);
    cout<<"Set bits of A= "<<ans1<<endl;
    cout<<"Set bits of B= "<<ans2<<endl;
    int ans=ans1+ans2;
    cout<<"Total set bits of A and B are= "<<ans<<endl;
    return 0;
}