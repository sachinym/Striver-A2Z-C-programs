#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern 1
                       2 2
                       3 3 3*/
    int n,i,j;
    cout<<"enter n value ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}