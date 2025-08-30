#include<iostream>
#include<vector>
using namespace std;

// int main(){ 
//     string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

//     int n;
//     cin>>n;
//     string result=" ";
    
//     if(n==0){
//         cout<<"Zero"<<endl;
//     }

//     while(n>0){
//         int lastDigit=n%10;
//         result=arr[lastDigit]+" " + result;
//         n/=10; 
//     }
//     cout<<result<<endl;
// }



#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "";

    while(n > 0) {
        int lastDigit = n % 10;
        string word = "";

        switch(lastDigit) {
            case 0: word = "Zero"; break;
            case 1: word = "One"; break;
            case 2: word = "Two"; break;
            case 3: word = "Three"; break;
            case 4: word = "Four"; break;
            case 5: word = "Five"; break;
            case 6: word = "Six"; break;
            case 7: word = "Seven"; break;
            case 8: word = "Eight"; break;
            case 9: word = "Nine"; break;
            default: word = "";
        }

        result = word + " " + result; 
        n /= 10;
    }

    cout << result << endl;

    return 0;
}

