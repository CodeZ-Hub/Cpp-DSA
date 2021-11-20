/*
  print this
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j,k,count;

    while (i <= n)
    {
        j = 1;
        k = i;
        count =1;

        while (j <= n )
        {
            if (j <= n-i)
            {
                cout << " "
                     << " ";
            }
            else
            {
                cout << count
                     << " ";
                     count++;
            }

           
            j++;
        }

          while (k)
        {
            if (k==i)
            {
                cout << "";
                    
            }
            else
            {
                cout << k
                     << " ";
            }

           
            k--;
        }
        cout << endl;
        ++i;
    }
}