#include<iostream>
using namespace std;
// int main(){
//     int num=1;
//     char ch='1';
//     while(true){
//         switch(ch){
//             case 1:cout<<"First"<<endl;
//                    cout<<"First again"<<endl;
//                    break;
//             case '1':cout<<"Character is here"<<endl;
//                     switch(num){
//                         case 1:cout<<"Num is inside the char"<<endl;
//                                 break;
//                     }
//                     // break;
//             default:cout<<"It is a default case"<<endl;
//         }
//         exit(0);
//     }
// }


//CALCULATOR=============


// int main(){
//     int a,b;
//     cout<<"Enter the three input a, and b: "<<endl;
//     cin>>a>>b;

//     char operation;
//     cout<<"Enter the operation you want to perform"<<endl;
//     cin>>operation;

//     switch(operation){
//         case '+':cout<<"The addition of "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
//                 break;

//        case '-':cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<(a-b)<<endl;
//                 break;
    
//        case '*':cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<(a*b)<<endl;
//                 break;

//        case '/':cout<<"The division of "<<a<<" and "<<b<<" is "<<(a/b)<<endl;
//                 break;
        
//        case '%':cout<<"The modulous of "<<a<<" and "<<b<<" is "<<(a%b)<<endl;
//                 break;

//         default:cout<<"Please enter a valid operation"<<endl;
// }
// }




int main(){
    int n,hundred_notes,fifty_notes,twenty_notes,one_notes;
    cout<<"Enter the total amount: ";
    cin>>n;

    int notes;
    cout<<"Enter the notes here: ";
    cin>>notes;

    switch(notes){
        case 100:
                hundred_notes=(n/100);
                cout<<"The number of notes of Rs.100 are: "<<hundred_notes<<endl;
                n=n-(hundred_notes*100);
                // break;
        case 50:
                fifty_notes=n/50;
                cout<<"The number of notes of Rs.50 are: "<<fifty_notes<<endl;
                n=n-(fifty_notes*50);
                // break;
        case 20:
                twenty_notes=n/20;
                cout<<"The number of notes of Rs.20 are: "<<twenty_notes<<endl;
                n=n-(twenty_notes*20);
                // break;
        case 1:
                one_notes=n/1;
                cout<<"The number of notes of Rs.1 are: "<<one_notes<<endl;
                n=n-(one_notes*1);
                break;
        default:
                cout<<"Please enter a available notes among (Rs.100,Rs.50,Rs.20,Rs.1)"<<endl;
    }
}