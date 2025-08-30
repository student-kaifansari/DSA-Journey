#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Use Binary Search: "<<endl;
    cout<<"Finding 5: "<<binary_search(v.begin(),v.end(),5)<<endl;//0
    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;//1

    cout<<"Lower Bound for 6: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound for 6: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"Max->"<<max(a,b)<<endl;
    cout<<"Min->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"After Swap a->"<<a<<endl;
    cout<<"After Swap b->"<<b<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());

    cout<<"Reverse String-> "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end());//sort jo ki based hai introsort ke upar jo ki teen algo ke combination se banta hai Quick sort, Heap sort, and Insertion Sort
    cout<<"After sort->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    };
}   
