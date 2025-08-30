#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("sir");

    cout<<"Size before pop: "<<q.size()<<endl;

    cout<<"First element is "<<q.front()<<endl;
    q.pop();
    cout<<"After pop:"<<endl;
    cout<<"First element is "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;
    
    cout<<"Empty or not: "<<q.empty()<<endl;

}