/*
  print this 
A
B C
C D E
D E F G
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
           C = 'A' + i + j -2;
            cout << C << " ";
           
            j++;
        }
        cout << endl;
       
        ++i;
    }
}