#include<iostream>
using namespace std;


// void a(int& i){
//     char ch='a'; // heree ch ='a' is a local variable of a() function
//     cout<<i<<endl;
// }

// void b(int& i){
//     cout<<i<<endl;
// }

// int main(){
//     int i=5;  //here int i is the local variable of main function
//     a(i);

//     {
//         int i=2;
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;
// }





// int score=15; //here score=15 is a glpbal variable for all functions or alll the code like a(), b(), main() (not a goob practice, for reason go to next code)

// void a(int& i){
//     cout<<score<<" in a "<<endl;
//     char ch='a'; // heree ch ='a' is a local variable of a() function
//     cout<<i<<endl;
// }

// void b(int& i){
//     cout<<score<<" in b "<<endl;
//     cout<<i<<endl;
// }

// int main(){
//     int i=5;  //here int i is the local variable of main function
//     cout<<score<<" in main "<<endl;
//     a(i);
//     b(i);

//     {
//         int i=2;
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;
// }





int score=15; //here score=15 is a glpbal variable for all functions or alll the code like a(), b(), main()

void a(int& i){
    cout<<score<<" in a "<<endl;
    char ch='a'; // heree ch ='a' is a local variable of a() function
    score++;
    cout<<i<<endl;
}

void b(int&i){
    cout<<score<<" in b "<<endl;
    cout<<i<<endl;
}

int main(){
    int i=5;  //here int i is the local variable of main function
    cout<<score<<" in main "<<endl;
    a(i);
    b(i);

    {
        int i=2;
        cout<<i<<endl;
    }
    cout<<i<<endl;
}