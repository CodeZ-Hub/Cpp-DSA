/*
  print this 
   *
   * *
   * * *
   * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
  int i =0,j;
    while (i<n)
    {
        j =0;
        while (j<=i)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}