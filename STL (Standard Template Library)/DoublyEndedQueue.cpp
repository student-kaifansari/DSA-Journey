//array ke dono end pr deletion aur insertion kr skte hai
//ye bhi dynamic hota hai size aram se badh skta hai
//random access bhi possible hai at() operation se

#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }


    cout<<"Element at 1st Index Element->"<<d.at(1)<<endl;
    cout<<"Empty or Not-> "<<d.empty()<<endl;

    cout<<"Front Element-> "<<d.front()<<endl;
    cout<<"Back Element-> "<<d.back()<<endl;

    cout<<"Befor erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//iski time complexity O(n) hogi baakiyo STL ki O(1) rahegi 
    cout<<"After erase: "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
}