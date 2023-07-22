#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern    *
                          **
                          ***
                          **** */
    int n,i,j,space;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

/*to print pattern **** 
                   ***
                   **
                   *   */
}