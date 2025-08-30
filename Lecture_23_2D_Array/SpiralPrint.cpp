#include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col) {
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            cout << arr[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
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

    cout << "Spiral print -> ";
    spiralPrint(arr,3,3);
    
}