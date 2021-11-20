/*
  print this 
A 
B B
C C C
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
     
        while (j <= i)
        {

            cout << C << " ";

            j++;
        }
        cout << endl;
        C++;
        ++i;
    }
}