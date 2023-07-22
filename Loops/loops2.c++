#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int n,i;
    cin>>n;
    cout<<"number from 1 to "<<n<<" are: "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
*/
    /*different approach */
    int n,i;
    cin>>n;
    cout<<"number from 1 to "<<n<<" are: "<<endl;
    i=1;
    for( ;;)
    {
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
}