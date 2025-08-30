#include<iostream>
using namespace std;
// int main(){
//     //create 2d array
//     int arr[3][4];

//     //taking input->row wise input
//     // for(int i=0;i<3;i++){//row
//     //     for(int j=0;j<4;j++){//col
//     //         cin>>arr[i][j];
//     //     }
//     // }

//     //taking input->col wise input
//     for(int i=0;i<4;i++){//col
//         for(int j=0;j<3;j++){//row
//             cin>>arr[j][i];
//         }
//     }



//     //print
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }




// int main(){
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,14,15};

//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
//       for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//element search function
bool isPresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<3;i++){//row
        for(int j=0;j<4;j++){//col
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    // taking input->row wise input
    for(int i=0;i<3;i++){//row
        for(int j=0;j<4;j++){//col
            cin>>arr[i][j];
        }
    }

    
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"ELement found"<<endl;
    }
    else{
        cout<<"Element not Found"<<endl;
    }

}