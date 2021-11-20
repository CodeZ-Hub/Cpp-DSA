/*
  print this 
A B C
B C D
C D E
easy way
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j;
    char C = 'A';
    while (i <= n)
    {
        j = 1;
        C = 'A' + i -1;
        while (j <= n)
        {

            cout << C << " ";
            C++;
            j++;
        }
        cout << endl;
        C++;
        ++i;
    }
}