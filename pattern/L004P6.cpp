/*
  print this 
  1
  2 3
  4 5 6
  7 8 9 10
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
  int i =1,j,count = 1;
  while (i<=n)
  {
      j =1;
      while(j<=i){
          cout<<count<<" ";
          j++;
          count++;
      }
      cout<<endl;
      i++;
  }
  
}