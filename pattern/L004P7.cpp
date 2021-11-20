/*
  print this 
  1
  2 3
  3 4 5
  4 5 6 7
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j, count = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            if (j == 1)
            {
                cout << i << " ";
                count = i+1;
            }
            else
            {
                cout << count << " ";
                count++;
            }
            j++;
        }
        cout << endl;
        i++;
    }
}