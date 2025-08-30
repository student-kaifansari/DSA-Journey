#include<iostream>
using namespace std;


// int main(){

//     int num=5;

//     cout<<num<<endl;

//     //addresss of Operator- &

//     cout<<"Address of num is "<<&num<<endl;

//     int *ptr=&num;
//     cout<<"value is: "<<*ptr<<endl;
//     cout<<"Address is: "<<ptr<<endl;

//     // int ptr= &num;//(not valid)

//     double d=4.2;

//     double *p=&d; //here you can't take *ptr as a pointer because it is already declare previously so the conflict had occur
//     cout<<"value is: "<<*p<<endl;
//     cout<<"Address is: "<<p<<endl;    

//     cout<<"Size of integer is "<<sizeof(num)<<endl;
//     cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
//     cout<<"Size of pointer is "<<sizeof(*ptr)<<endl;

//     cout<<"Size of integer is "<<sizeof(d)<<endl;
//     cout<<"Size of pointer is "<<sizeof(p)<<endl;
//     cout<<"Size of pointer is "<<sizeof(*p)<<endl;

//     return 0;
// }




// int main(){
    
//     //pointer to int is created, and pointing to some garbage address
//     int *p; //bad practice

//     cout<<*p<<endl;
//     cout<<p<<endl;

// }





// int main(){
    
//     //pointer to int is created, and pointing to some garbage address
//     int *p=0; //bad practice

//     cout<<*p<<endl;
//     cout<<p<<endl;

// }




// int main(){
//     int i=5;

//     // int *p=&i;
//     //or (upar ki one line aur neeche ki do line barabar hi hai)
//     int *p=0;
//     p=&i;

//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&i<<endl;//doubt
//     cout<<&p<<endl;

// }




// int main(){
    
//     // int *p=&i;
//     //or (upar ki one line aur neeche ki do line barabar hi hai)
//     int i=5;

//     int *q=&i;
//     cout<<q<<endl;
//     cout<<*q<<endl;

//     int *p=0;
//     p=&i;

//     cout<<p<<endl;
//     cout<<*p<<endl;

// }




// int main(){

//     int num=5;
//     int a=num;
//     cout<<"Befor:"<<num<<endl;
//     a++;
//     cout<<"After:"<<num<<endl;
    
//     int *p=&num;
//     cout<<"Befor:"<<num<<endl;
//     (*p)++;//5++=6
//     cout<<"After:"<<num<<endl;

// }






int main(){

    int num=5;
    int a=num;
    cout<<"num Befor:"<<num<<endl;
    cout<<"a Befor:"<<a<<endl;
    a++;
    cout<<"num After:"<<num<<endl;
    cout<<"a After:"<<a<<endl;
    
    int *p=&num;
    cout<<"Befor:"<<num<<endl;
    (*p)++;//5++=6
    cout<<"After:"<<num<<endl;

}