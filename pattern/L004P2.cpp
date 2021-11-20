/*
  print this 
   3 2 1
   3 2 1
   3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows ";
    cin>>n;
    int i=0,j;
    while (i<n)
    { j=1;
        while(j <=n){
            cout<<n - j + 1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}