#include<iostream>
using namespace std;

// void printWave(int arr[][3],int row,int col){
//     for(int j=0;j<3;j++){//col        
//         for(int i=0;i<3;i++){//row
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

// int main(){
//     int arr[3][3];

//     cout<<"Enter the elements-> "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"Printing the elements-> "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

//     printWave(arr,3,3);
// }











void printWave(int arr[][3], int row, int col) {
    int j = 0;

    while (j < col) {
        int i;

        // Even column: top to bottom
        if (j % 2 == 0) {
            i = 0;
            while (i < row) {
                cout << arr[i][j] << " ";
                i++;
            }
        }

        // Odd column: bottom to top
        else {
            i = row - 1;
            while (i >= 0) {
                cout << arr[i][j] << " ";
                i--;
            }
        }

        j++; // ✅ Move to next column
    }
}


int main() {
    int arr[3][3];

    cout << "Enter the elements -> " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the matrix ->" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Wave print -> ";
    printWave(arr, 3, 3);
}
