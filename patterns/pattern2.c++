#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern 1 2 3
                       4 5 6
                       7 8 9*/
    int n,i=1;
    cout<<"enter n value ";
    cin>>n;
    int count=1;
    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
        {
            cout<<count;
            count=count+1;
            j=j+1;
            cout<<" ";
        }
        cout<<endl;
        i=i+1;
    }
}