// print sum 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The total sum of 1 to "<<n<<" is "<<sum;

}