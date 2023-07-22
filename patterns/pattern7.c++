#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*to print pattern A
                       B C
                       C D E
                       D E F G*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i+j-2;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}