/*
  print this 
   1 2 3
   4 5 6
   7 8 9
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int i=1,j=1;
    while (i<=n)
    {
        while (j<=i*n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}