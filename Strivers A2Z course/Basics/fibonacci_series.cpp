#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter n number: ";
    cin>>n;
    if(n<=1){
        cout<<n<<" "<<n-1<<endl;
    }else
    {
        int first=0;// for (n-2)th term
        int second=1;// for (n-1)th term
        cout<<first<<" "<<second<<" ";
        int temp;
        for(auto i=2;i<=n;i++){
            temp=first+second;
            first=second;
            second=temp;
            cout<<temp<<" ";
        }
    }
    return 0;
}