#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// int main(){
//     string arr[5]={"a","b","c","d","e"};
//     int size=5;

//     reverse(arr,arr+5);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }



// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string arr[5] = {"a", "b", "c", "d", "e"};
//     int size = 5;

//     int start = 0, end = size - 1;
//     while (start <= end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] <<" ";
//     }

//     return 0;
// }




// USING RECURSION

void reverse(string& str,int i,int j){

    cout<<"Call received for "<<str<<endl;

    //base case
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    //recursion call
    reverse(str,i,j);

}

int main(){
    string name="abcde";
    cout<<endl;

    reverse(name,0,name.length()-1);
    cout<<endl;

    cout<<name<<endl;

    return 0;
}