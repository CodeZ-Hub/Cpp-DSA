/*
  print this
        1 2 3 4 5 5 4 3 2 1
        1 2 3 4 * * 4 3 2 1
        1 2 3 * * * * 3 2 1
        1 2 * * * * * * 2 1
        1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j, k;
    while (i <= n)
    {
        j = 1;
        {
            k = n;
            while (j <= n)
            {
                if (j < n - i + 2 )
                {
                    cout << j << " ";
                }
                else
                {
                    cout << "*"
                         << " ";
                }

                j++;
            }
            while (k)
            {
                if (k >= n-i + 2)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << k << " ";
                }
                k--;
            }

            cout << endl;
            i++;
        }
    }
}