#include<iostream>
using namespace std;

// int main(){
//     int i=5;
//     // create a reference variable
//     int &j=i;

//     cout<<i<<endl;
//     cout<<j<<endl;
//     i++;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
// }



// Pass By Value
// void update(int n){
//     n++;
// }
// int main(){
//     int n=5;
//     cout<<"Before: "<<n<<endl;
//     update(n);
//     cout<<"Afterw: "<<n<<endl;
// }



// Pass by Reference
// void update2(int &n){
//     n++;
// }
// void update1(int n){
//     n++;
// }
// int main(){
//     int n=5;
//     cout<<"Before: "<<n<<endl;
//     update1(n);
//     cout<<"Afterw: "<<n<<endl;
//     cout<<endl;
//     cout<<"Before: "<<n<<endl;
//     update2(n);
//     cout<<"After: "<<n<<endl;
// }





// int& function(int a){ // here num and ans are local variable which is vanish after the function block (memory clear) i.e. both r temporary variable so nothing will be return as output (it's bad pratice)
//     int num=a;
//     int& ans=num;
//     return ans;
// }
// void update2(int &n){
//     n++;
// }
// void update1(int n){
//     n++;
// }
// int main(){
//     int n=5;
        
//     function(n);
// }





// int& function(int a){ // here num and ans are local variable which is vanish after the function block (memory clear) i.e. both r temporary variable nothing will be return as output (it's bad pratice)
//     int num=a;
//     int& ans=num;
//     return ans;
// }
// int* func(int n){ // here ptr local variable which is vanish after the func block (memory clear) i.e.  temporary variable  nothing will be return as output(it's bad pratice)
//     int* ptr=&n;
//     return ptr;
// }
// void update2(int &n){
//     n++;
// }
// void update1(int n){
//     n++;
// }
// int main(){
//     int n=5;
        
//     function(n);
//     func(n);
// }




// int main(){
//     char ch='q';
//     cout<<sizeof(ch)<<endl;

//     char *c=&ch;
//     cout<<sizeof(c)<<endl;

// }




// int getSum(int *arr,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;

//     //variable size array
//     int *arr=new int[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int ans=getSum(arr,n);

//     cout<<"Answer is: "<<ans<<endl;

// }







int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;

    //variable size array
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getSum(arr,n);

    // case-1:for static
    while(1){
        int i=5;  //yaha pr memory bnagi aur delete ho jayegi for a instant of time only 1 int memory taken
    }

    // cas2:for dynamic
    cout<<"Answer is: "<<ans<<endl;
    while(1){
        int *ptr=new int; 
    }
}



