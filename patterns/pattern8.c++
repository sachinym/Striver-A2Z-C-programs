#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern D
                       C D
                       B C D
                       A B C D*/
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char ch='A'+n-i;
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}