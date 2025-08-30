#include <iostream>
using namespace std;
int main()
{
    char ch[8] = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c'};
    char ch1[6] = {};
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        int index = 0;
        if (ch[index] == ch[i])
        {
            count++;
            for (int j = 0; j < 6; j++)
            {
                ch1[j] = ch[i];
                ch[j+1]=count;
            }
        }
    }
}