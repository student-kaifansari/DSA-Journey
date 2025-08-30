#include<iostream>
using namespace std;

// bool palindrome(int n){
//     int result=0;
//     int originalNum=n;

//     while(n>0){
//         int lastdigit=n%10;
//         result=lastdigit+result*10;
//         n/=10;
//     }
//     if(result==originalNum){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

    
//     if(palindrome(n)){
//         cout<<"The number is palindrome"<<endl;
//     }
//     else{
//         cout<<"The number is not palindrome"<<endl;
//     }
//     return 0;
// }


// the above code have time complexity O(log(n))



// int reverse(int n,int result=0){
//     if(n>0){
//         int lastdigit=n%10; 
//         result=lastdigit+result*10;
//         return reverse(n/10,result);
//     }
// }

// bool palindrome(int n){
    
//     if(n<0){
//         return false;
//     }

//     return reverse(n)==n;
    
// }

// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

    
//     if(palindrome(n)){
//         cout<<"The number is palindrome"<<endl;
//     }
//     else{
//         cout<<"The number is not palindrome"<<endl;
//     }
//     return 0;
// }


// the above code have time complexity O(log(n))

bool isPalindrome(string str,int s,int e){

    //base case
    if(s>=e){
        return true;
    }

    if(str[s]!=str[e]){
        return false;
    }

    return isPalindrome(str,s+1,e-1);
}

int main(){
    string str="abbrbb";

    if(isPalindrome(str,0,str.length()-1)){
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome"<<endl;
    }
}
