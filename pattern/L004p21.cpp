/*
  print this
    1 1 1 1
      2 2 2
        3 3
          4 

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

        while (j <= n )
        {
            if (j < i)
            {
                cout << " "
                     << " ";
            }
            else
            {
                cout << i
                     << " ";
            }

           
            j++;
        }
        cout << endl;
        ++i;
    }
}