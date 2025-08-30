//aisi queue jiska first element hmesha greatest hoga, ham max heap ki baat kr rhe hai
//default priority queue max heap hota hai


#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi; 

    // min heap
    priority_queue<int,vector<int>,greater<int>>mini;

    cout<<"For max heap: "<<endl;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size of max heap is "<<maxi.size()<<endl;

    int n=maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"Front element in max heap is "<<maxi.top()<<endl;

    cout<<"For min heap: "<<endl;

    mini.push(5);
    mini.push(3);
    mini.push(8);
    mini.push(1);

    cout<<"Size of min heap is "<<mini.size()<<endl;
    n=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Front element in min heap is "<<mini.top()<<endl;

    cout<<"Empty or not: "<<mini.empty()<<endl;
}