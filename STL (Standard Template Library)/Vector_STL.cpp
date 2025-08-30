// vector dynamic array hota hai

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Capacity -> "<<v.capacity()<<endl;//size ka mtlb hota hai ki abhi current element kitne hai iske andar aur capacity ka mtlb hai ki total kitne element ke lye memory allocate hui padi hai
    v.push_back(10);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;//size ka mtlb hota hai ki abhi current element kitne pade hain iske andar

    cout<<"Element at 2nd Index->"<<v.at(2)<<endl;
    cout<<"Empty or Not-> "<<v.empty()<<endl;

    cout<<"Front Element-> "<<v.front()<<endl;
    cout<<"Back Element-> "<<v.back()<<endl;

    cout<<"Befor pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //clear operation ka use krte hai to vector ka size 0 hota hai capacity 0 nhi hoti

    cout<<"Before clear size: "<<v.size()<<endl;

    v.clear();

    cout<<"After clear size: "<<v.size()<<endl;

    //agar mjhe size phle se pta hai ki hme kis size ka vector banana hai to 

    vector<int> a(5,1);//here 5 is size and 1 is element jo hme 5 baar insert krna hai

    cout<<"Print vector"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    // last naam ke vector me ham a vector ko copy kr rhe hai

    vector<int> last(a);

    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

}