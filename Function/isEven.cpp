#include<iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>> a >> b;

//     int ans=1;

//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<"Answer is: "<<ans<<endl;
// }

//OR----------


// int power(int a,int b){
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int answer=power(a,b);
//     cout<<"Answer is "<<answer<<endl;
//     return answer;
// }




// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int answer=power();
//     cout<<"Answer is "<<answer<<endl;
//     return answer;
// }



//CHECK EVEN AND ODD
//1->Even
//0->Odd

bool isEven(int x){
    //Odd
    if(x&1){
        return 0;
    }
    else{//Even
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    if(isEven(n)){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
}