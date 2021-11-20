/*
  print this 
  1
  2 3
  3 4 5
  4 5 6 7
  without int count
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            if (j == 1)
            {
                cout << i << " ";
               
            }
            else
            {
                cout << i+j-1<< " ";
               
            }
            j++;
        }
        cout << endl;
        i++;
    }
}