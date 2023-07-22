#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern 1
                       2 3
                       3 4 5
                       4 5 6 7*/
    int n,row=1;
    cout<<"enter n value ";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        int count=row;
        while(col<=row)
        {
            cout<<count<<" ";
            count++;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}