#include<iostream>
using namespace std;
// int main(){
//     int arr[10];
//     cout<<"Address of first memory block is: "<<arr<<endl;
//     cout<<"Address of first memory block is: "<<&arr[0]<<endl;
//     cout<<"Address of first memory block is: "<<&arr<<endl;
//     cout<<arr[0]<<endl;//shown garbage value

//     return 0;
// }



// int main(){
//     int arr[10]={0};
//     cout<<"Address of first memory block is: "<<arr<<endl;
//     cout<<"Address of first memory block is: "<<&arr[0]<<endl;
//     cout<<"Address of first memory block is: "<<&arr<<endl;
//     cout<<arr[0]<<endl;

//     return 0;
// }



// int main(){
//     int arr[10]={2,4,6};
//     cout<<arr[0]<<endl;
//     cout<<"1: "<<*arr<<endl;
//     cout<<sizeof(arr[10]/arr[0])<<endl;
//     cout<<"2: "<<*arr+1<<endl;
//     cout<<"3: "<<*arr*5<<endl;
//     cout<<"4: "<<*(arr)+1<<endl;

//     return 0;
// }



// int main(){
//     int arr[10]={23,122,41,67};
//     cout<<arr[0]<<endl;
//     cout<<"1: "<<*arr<<endl;
//     cout<<"2: "<<*arr+1<<endl;
//     cout<<"3: "<<*arr*5<<endl;
//     cout<<"4: "<<*(arr)+1<<endl;
//     cout<<"5: "<<*(arr+2)<<endl;
//     cout<<"5: "<<arr[2]<<endl;

//     int i=3;
//     cout<<i[arr]<<endl;
//     return 0;
// }



// int main(){
//     int arr[10]={23,122,41,67};
//     int temp[10];
//     cout<<sizeof(temp)<<endl;
//     cout<<sizeof(arr)<<endl;

//     int *ptr=&temp[0];
//     cout<<sizeof(ptr)<<endl;//8 or 4
//     cout<<sizeof(*ptr)<<endl;//4
//     cout<<sizeof(&ptr)<<endl;//8 or 4
// }



// int main(){
//     int temp[10]={1,2};
//     cout<<sizeof(temp)<<endl;//40
//     cout<<sizeof(*temp)<<endl;//4
//     cout<<sizeof(&temp)<<endl;//8 or 4

//     int *ptr=&temp[0];
//     cout<<sizeof(ptr)<<endl;//8 or 4
//     cout<<sizeof(*ptr)<<endl;//4
//     cout<<sizeof(&ptr)<<endl;//8 or 4
// }



// int main(){
//     int a[20]={1,2,3,5};
//     cout<<"-> "<<&a[0]<<endl;
//     cout<<&a<<endl;
//     cout<<a<<endl;

//     int *p=&a[0];
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<"-> "<<&p<<endl;
// }



int main(){
    
    int arr[10];
    // arr=arr+1;//error

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;

}