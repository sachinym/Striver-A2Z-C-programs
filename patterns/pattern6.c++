#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to solve pattern A B C 
                       B C D 
                       C D E  */
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i+j-2;
        while(j<=n)
        { 
            cout<<ch<<" ";
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }
   /*to print pattern A
                      B B
                      C C C*/
   int n,i,j;
   cin>>n;
   char ch='A';
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
        cout<<ch<<" ";
    }
    ch=ch+1;
    cout<<endl;
   }

}