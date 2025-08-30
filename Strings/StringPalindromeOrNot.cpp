// #include<iostream>
// #include<cstring> // for strcmp()
// using namespace std;

// //OK way

// int main() {
//     char str[20];

//     cout << "Enter the string: ";
//     cin >> str;

//     // Length
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         count++;
//     }
//     int len = count;
//     cout << "The length of the string is: " << len << endl;

//     // Make a copy of original string (before reversing)
//     char original[20];
//     for (int i = 0; i <= len; i++) { // copy including '\0'
//         original[i] = str[i];
//     }

//     // Reverse
//     int s = 0;
//     int e = len - 1;

//     while (s < e) {
//         swap(str[s], str[e]);
//         s++;
//         e--;
//     }

//     // Now str is reversed
//     cout << "Reversed string is: " << str << endl;

//     // Check Palindrome
//     if (strcmp(original, str) == 0) {
//         cout << "YES!!! It is a Palindrome" << endl;
//     } else {
//         cout << "NO!!! It is NOT a Palindrome" << endl;
//     }

//     return 0;
// }









//Best way



#include<iostream>
using namespace std;


char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a'; // converting uppercase to lowercase
    }
    else {
        return ch; // already lowercase
    }
}


int main(){
    char str[20];

    cout<<"Enter the string: ";
    cin>>str;

    //length of string

    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    int len=count;
    cout<<"The length of the string is: "<<len<<endl;

    int s=0;
    int e=len-1;


    //check palindrome or not
    bool isPalindrome=true;

    while(s<=e){
        if(toLowerCase(str[s])!=toLowerCase(str[e])){
            isPalindrome=false;
            break;
        }
        s++;
        e--;
    }

    if(isPalindrome){
        cout<<"YES!!! It is palindrome"<<endl;
    }
    else{
        cout<<"NO!!! It is palindrome"<<endl;
    }

}