#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char ch = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         ch++;
//         i++;
//     }
// }





// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char ch = 65;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         ch++;
//         i++;
//     }
// }





int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch='A'+i-1;
            cout <<ch ;
            j++;
        }
        cout << endl;
        i++;
    }
}