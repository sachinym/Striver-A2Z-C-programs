#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern A B C
                       D E F
                       G H I*/
    int n,i=1;
    cin>>n;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        
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
                       B C
                       D E F*/
    int n,i,j;
    cin>>n;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}