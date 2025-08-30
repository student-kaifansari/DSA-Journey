// map me data hmara key value ke form me store hota hai
//isme saari keys unique hoti hai aur apki ek key unique value ko hi point kregi
//value same ho skte hai lekin key alag-alag hogi 
//map ke case me sorted keys hi return karega 
//unordered map ke case me random hota hai sorted bhi aa skta hai aur unsorted bhi return kr skta hai

#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int, string> m;

    m[1]="Babbar";//here 1 is a key and babbar is a value
    m[13]="Kumar";
    m[2]="Love";

    //another way to insert the value

    m.insert({5,"Bheem"});

    cout<<"Before Erase: "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13-> "<<m.count(13)<<endl;
    cout<<"Finding -7-> "<<m.count(-7)<<endl;


    // m.erase(13);
    cout<<"After erase: "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<i->first<<endl;
    }
    //insert, eras, find, count in sab ki complexity map ke case me O(log n) hoti hai
}