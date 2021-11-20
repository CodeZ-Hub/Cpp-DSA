/*
  print this
    * * * *
    * * *
    * *
    * 
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

    while (i <= n)
    {
        j = 1;

        while (j <= n - i +1)
        {

            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        ++i;
    }
}