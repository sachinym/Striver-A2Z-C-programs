#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(n²)
/*int singlenumber(vector<int>&A){
int num=0;
for(int i=0;i<A.size();i++){
    int cnt=0;
    num=A[i];
    for(int j=0;j<A.size();j++){
        if(A[j]==num){
            cnt++;
        }
    }
    if(cnt==1) return num;
}
return num; 
}*/
int singlenumber(vector<int>&A){
int xorr=0;
for(int i=0;i<A.size();i++){
    xorr=xorr^A[i];
}
return xorr;
}
int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    int res=singlenumber(A);
    cout<<res<<endl;   
    return 0;
}