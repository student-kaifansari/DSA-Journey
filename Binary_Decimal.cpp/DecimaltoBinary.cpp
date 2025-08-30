// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit=n & 1;
//         ans=(bit * pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<"Answer is "<<ans<<endl;
// }



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit=n&1;
//         ans=(bit*pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<"Answer is "<<ans<<endl;
// }




// #include<iostream>
// #include<string>
// using namespace std;

// string toBinary(int n) {
//     // For positive numbers and zero
//     if (n >= 0) {
//         string binary = "";
//         while (n > 0) {
//             binary = to_string(n % 2) + binary;
//             n /= 2;
//         }
//         return (binary.empty()) ? "0" : binary;  // Return "0" if the number is 0
//     }
    
//     // For negative numbers (Two's complement representation)
//     else {
//         // Convert positive part to binary
//         int positive_num = -n;
//         string binary = "";
//         while (positive_num > 0) {
//             binary = to_string(positive_num % 2) + binary;
//             positive_num /= 2;
//         }

//         // Make sure we have at least 32 bits
//         // In two's complement, we will consider a 32-bit representation
//         while (binary.length() < 32) {
//             binary = "0" + binary;
//         }

//         // Now apply two's complement
//         // Step 1: Invert the bits
//         for (int i = 0; i < binary.length(); i++) {
//             binary[i] = (binary[i] == '0') ? '1' : '0';
//         }

//         // Step 2: Add 1 to the inverted bits
//         for (int i = binary.length() - 1; i >= 0; i--) {
//             if (binary[i] == '0') {
//                 binary[i] = '1';
//                 break;
//             } else {
//                 binary[i] = '0';
//             }
//         }

//         return binary;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a decimal number: ";
//     cin >> n;
    
//     cout << "Binary representation: " << toBinary(n) << endl;
    
//     return 0;
// }







#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}






















