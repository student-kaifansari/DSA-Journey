//doubly linked list ka use krke list stl banaya gya hai doubly linked list me do pointer hote hai ek front ka bhi aur ek back ka bhi
//isme direct access possible nhi hota jaise vector array me possible tha

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i : l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of List: "<<l.size()<<endl;

    //agar list ko copy krna hai ek nayi list ke andar to use ham is trah krenge :
    cout<<"Copy list: ";
    list<int> l2(l);

    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> l3(5,100);//5 element rkhta hun aur sbko 100 se initialize kr deta hun
    cout<<"List 3: ";
    for(int i:l3){
        cout<<i<<" ";
    }

}