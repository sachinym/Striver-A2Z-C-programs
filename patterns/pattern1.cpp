#include<bits/stdc++.h>
using namespace std;
int main(){
    //easy method
    /*to print pattern 1 2 3
                       1 2 3
                       1 2 3*/
    int n,i,j;
    cout<<"enter n value ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

   //alternate method
   /*
   int n,i=0;
   cout<<"enter n value ";
   cin>>n;
   while(i<n)
   {
    int j=0;
    while(j<n)
    {
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
   */
} 