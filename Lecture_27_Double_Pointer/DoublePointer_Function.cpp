#include<iostream>
using namespace std;

// void update(int **p2){
//     p2=p2+1;
//     //kuch change hoga-No change

//     //*p=*p+1;

//     //**p=**p+1;
// }

// int main(){
//     int i=5;
//     int *p=&i;
//     int **p2=&p;
//     /*
//     cout<<endl<<endl<<"Sab sahi chal raha hai"<<endl<<endl;

//     cout<<i<<endl;
//     cout<<*p<<endl;
//     cout<<**p2<<endl;

//     cout<<&i<<endl;
//     cout<<p<<endl;
//     cout<<*p2<<endl;

//     cout<<&p<<endl;
//     cout<<p2<<endl;
//     */

//     cout<<"before "<<i<<endl;
//     cout<<"before "<<p<<endl;
//     cout<<"before "<<p2<<endl;
//     update(p2);
//     cout<<"after "<<i<<endl;
//     cout<<"after "<<p<<endl;
//     cout<<"after "<<p2<<endl;

//     return 0;
// }





// void update(int **p2){
//     *p2=*p2+1;
//     //kuch change hoga-Yes change

//     //**p=**p+1;
// }

// int main(){
//     int i=5;
//     int *p=&i;
//     int **p2=&p;
//     /*
//     cout<<endl<<endl<<"Sab sahi chal raha hai"<<endl<<endl;

//     cout<<i<<endl;
//     cout<<*p<<endl;
//     cout<<**p2<<endl;

//     cout<<&i<<endl;
//     cout<<p<<endl;
//     cout<<*p2<<endl;

//     cout<<&p<<endl;
//     cout<<p2<<endl;
//     */

//     cout<<"before "<<i<<endl;
//     cout<<"before "<<p<<endl;
//     cout<<"before "<<p2<<endl;
//     update(p2);
//     cout<<"after "<<i<<endl;
//     cout<<"after "<<p<<endl;
//     cout<<"after "<<p2<<endl;

//     return 0;
// }









void update(int **p2){
    **p2=**p2+1;
    //kuch change hoga-Yes change

}

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    /*
    cout<<endl<<endl<<"Sab sahi chal raha hai"<<endl<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;
    */

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;

    return 0;
}