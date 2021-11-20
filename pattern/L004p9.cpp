/*
  print this 
 A A A
 B B B
 C C C
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
            j++;
        }
        cout << endl;
        C++;
        i++;
    }
}