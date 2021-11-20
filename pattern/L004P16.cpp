/*
  print this 
D
C D
B C D
A B C D
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
          C = 'A' + n -i + j - 1;
            cout << C << " ";

            j++;
        }
        cout << endl;
  
        ++i;
    }
}