//By me=======through array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={11,7,3,12,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;//4

//     int s=0;
//     int e=n-1;

//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// BY ME through vector======


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     cout<<"Original Array: ";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
    
//     int s=0;
//     int e=v.size()-1;

//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }

//     cout<<"Reversed Array: ";
//     for(int i:v){
//         cout<<i<<" ";
//     }

// }



// BY SIR Through vector======================================================================================================

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }

//     return v;
// }

// void print(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans=reverse(v);
//     cout<<"Printing the reverse array: ";
//     print(ans);
//     return 0;
// }






#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int s;
    cout<<"Enter the element where you want to reverse the array: ";
    cin>>s;

    s=s+1;

    int e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}







// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }

//     return v;
// }

// void print(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans=reverse(v);
//     cout<<"Printing the reverse array: ";
//     print(ans);
//     return 0;
// }
