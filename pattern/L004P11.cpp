/*
  print this 
 A B C
 D E F
 G H I
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    int i = 1, j, count = 1;
    char C ='A';
    while (i <= n)
    {
        j = 1;
        while (j <= n){
         cout<<C<<" ";
           C++;
            j++;
        }
        cout << endl;
      
        i++;
    }
}