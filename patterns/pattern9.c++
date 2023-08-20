#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern       *
                            **
                           ***
                          **** */
    int n,i,j,space;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(space=n-i;space!=0;space--){
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
cout<<"--------"<<endl;
/*to print pattern **** 
                   ***
                   **
                   *   */
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }             
}