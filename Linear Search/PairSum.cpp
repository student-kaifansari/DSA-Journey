/*BY ME===================*/

//  #include<iostream>
//  using namespace std;
//  int pairSum(int arr[],int n,int target){

//      int sum=0;
//      for(int i=0;i<n;i++){
//          int start=arr[i];
//          int secondStart=arr[i+1];
//          sum=start+secondStart;
//          if(sum<target){
//             secondStart++;
//          }
//          else if(sum==target){
//             cout<<"The pair is found at "<<start<<" and "<<secondStart<<endl;
//             start++;
//             secondStart++;
//         }
//          else{
//             cout<<"The pair is not exist in the array"<<endl;
//             break;
//          }
//      }
//      return sum;
//  }
//  int main(){
//      int arr[5]={1,2,3,4,5};
//      int sum;
//      cout<<"Enter the value that you want to pair sum: ";
//      cin>>sum;
//      pairSum(arr,5,sum);
//  }


/*BY CHATGPT==================*/


// #include <iostream>
// using namespace std;

// void pairSum(int arr[], int n, int target) {
//     bool found = false; // Flag to check if any pair is found
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid duplicates
//             int sum = arr[i] + arr[j];
//             if (sum == target) {
//                 cout << "The pair is found: (" << arr[i] << ", " << arr[j] << ")" << endl;
//                 found = true; // Set the flag to true if a pair is found
//             }
//         }
//     }
//     if (!found) {
//         cout << "The pair does not exist in the array." << endl;
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int sum;
//     cout << "Enter the value that you want to pair sum: ";
//     cin >> sum;
//     pairSum(arr, 5, sum);
//     return 0; // Add a return statement for main
// }





