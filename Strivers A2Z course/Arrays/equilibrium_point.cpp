#include<bits/stdc++.h>
using namespace std;
int equilibrium(int a[],int n){
    if(n==0||n==1)
        return n;
        int sum1=0,sum2=0,i=0,j=n-1;
        while(i<j)
        {
            if(sum1==sum2 && i==j)
            return i+1;
            else if(sum1==sum2)
            {
                sum1+=a[i++];
                sum2+=a[j--];
            }
            else if(sum1>sum2)
               sum2+=a[j--];
            else
                sum1+=a[i++];
        }
        if(sum1==sum2 && i==j)
        return i+1;
        else
        return -1;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<equilibrium(a,n)<<endl;
    return 0;
}