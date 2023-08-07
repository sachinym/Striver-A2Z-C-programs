#include<bits/stdc++.h>
using namespace std;
//optimal solution T.C-->O(n) S.C-->O(1)
int missing_number(vector<int>&A,int n){
    int xor1=0,xor2=0;
    int N=n-1;
    for(int i=0;i<N;i++){
        xor2=xor2^A[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor2^xor1;
}
int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    int res=missing_number(A,n);
    cout<<res<<endl;
    return 0;
}