#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int count = 0;

    for (int i = 0; s[i] != '\0'; )
    {
        int index = 0;
        if (s[index] == s[i])
        {
            count++;
            if (count == target)
            {
                s.erase(i, target);
                if(i>0){
                    i--;
                }
            }
            else{
                i++;
            }
        }
    }


    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
}