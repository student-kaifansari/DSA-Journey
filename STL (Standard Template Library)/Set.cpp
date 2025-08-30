//unique element ko store krta hai 
//koi bhi element daal chuke h to usko ham modify nhi kr skte hai ya to aap daale ya fr aap delete kr de do hi cheez kr skte hai aap
//sorted order me element apko return hote hai
//set jo hota hai wo unordered set se thoda slow hota hai
//unordered set me element random aate hai sorted way me nhi aate

#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;

    s.insert(5);//yaha pr insert operation ki time comp O(log n) hoti hai
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(1);
    s.insert(1);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    // s.erase(s.begin());

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"5 is present hai ya nhi: "<<s.count(5)<<endl;
    cout<<"-1 is present hai ya nhi: "<<s.count(-1)<<endl;

    set<int>:: iterator itr=s.find(5);

    // cout<<"Value present at itr->"<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }

    //insert,find,erase,count chaaro operation ki time comp O(log n) hoti hai
    //size,begin,end,empty chaaro operation ki time comp O(1) hoti hai

}