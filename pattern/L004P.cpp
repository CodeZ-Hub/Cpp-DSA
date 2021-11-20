/*
  print this 
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter row "<<endl;
  cin>>n;
  int i=0,j;
  while (i<n)
  {
      j =1;
      while (j<=n)
      {
          cout<<j<<" ";
          j++;
      }
      i++;
      cout<<endl;
  }
  

}