#include<iostream>
using namespace std;

// example1
// int main(){
//     int first=8;
//     int second=18;
//     int *ptr=&second;
//     *ptr=9;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// }


//example2
// int main(){
//     int first=6;
//     int *p=&first;
//     int *q=p;
//     (*q)++;
//     cout<<first<<endl;
//     return 0;
// }




// int main(){
//     int first=8;
//     int *p=&first;
//     cout<<(*p)++<<" ";
//     cout<<first<<endl;
//     return 0;
// }



// int main(){
//     int *p=0;
//     int first=110;
//     *p=first;
//     cout<<*p<<endl;
//     return 0;
// }




// int main(){
//     int *p=0;
//     int first=110;
//     p=&first;
//     cout<<*p<<endl;
//     return 0;
// }



// int main(){
//     int first=8;
//     int second=11;
//     int *third=&second;
//     first=*third;
//     *third=*third+2;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// }



// int main(){
//     float f=12.5;
//     float p=21.5;
//     float *ptr=&f;
//     (*ptr)++;
//     *ptr=p;
//     cout<<*ptr<<" "<<f<<" "<<p<<endl;
//     return 0;
// }



// int main(){
//     int arr[5];
//     int *ptr;
//     cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
//     return 0;
// }



// int main(){
//     int arr[]={11,21,13,14};
//     cout<<*(arr)<<" "<<*(arr+1)<<endl;
//     return 0;
// }



// int main(){
//     int arr[6]={11,12,31};
//     cout<<arr<<" "<<&arr<<endl;
//     return 0;
// }



// int main(){
//     int arr[6]={11,21,13};
//     cout<<(arr+1)<<endl;
//     return 0;
// }


// int main(){
//     int arr[6]={11,21,13};
//     int *p=arr;
//     cout<<p[2]<<endl;
//     return 0;
// }


// int main(){
//     int arr[]={11,12,13,14,15};
//     cout<<*(arr)<<" "<<*(arr+3);
//     return 0;
// }



// int main(){
//     int arr[]={11,21,31,41};
//     int *ptr=arr++;
//     cout<<*ptr<<endl;
//     return 0;
// }



// int main(){
//     char ch='a';
//     char *ptr=&ch;
//     ch++;
//     cout<<*ptr<<endl;
//     return 0;
// }


// int main(){
//     char arr[]="abcde";
//     char *p=&arr[0];
//     cout<<p<<endl;
//     return 0;
// }



// int main(){
//     char arr[]="abcde";
//     char *p=&arr[0];
//     p++;
//     cout<<p<<endl;
//     return 0;
// }



// int main(){
//     char str[]="babbar";
//     char *p=str;
//     cout<<str[0]<<" " <<p[0]<<endl;
//     return 0;
// }



// void update(int *p){
//     *p=(*p)*2;
// }
// int main(){
//     int i=10;
//     update(&i);
//     cout<<i<<endl;
//     return 0;
// }



// void fun(int arr[]){
//     cout<<arr[0]<<" ";
// }
// int main(){
//     int arr[]={11,12,13,14};
//     fun(arr+1);
//     cout<<arr[0]<<endl;
// }



// int main(){
//     int first=110;
//     int *p=&first;
//     int **q=&p;
//     int second =(**q)++ + 9;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// }



// int main(){
//     int first=100;
//     int *p=&first;
//     int **q=&p;
//     int second=++(**q);
//     int *r=*q;
//     ++(*r);
//     cout<<first<<" "<<second<<endl;
//     return 0;
// }



void increment(int **p){
    ++(**p);
}
int main(){
    int num=110;
    int *ptr=&num;
    increment(&ptr);
    cout<<num<<endl;
    return 0;
}