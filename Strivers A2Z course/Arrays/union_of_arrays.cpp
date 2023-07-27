//Given two arrays a[] and b[] of size n and m respectively. 
//The task is to find the number of elements in the union between these two arrays.
#include<bits/stdc++.h>
using namespace std;
int union_array(int a[],int n,int b[],int m){
    set<int>s;
    for(int i=0;i<n;i++){
            s.insert(a[i]);
    }
    for(int i=0;i<m;i++){
            s.insert(b[i]);
    }
    return s.size();
}
int main() {
    int n,m;
    cin>>n>>m;
    //vector<int>a(n); vector<int>b(m);
    int a[n]; int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int result=union_array(a,n,b,m);
    cout<<result;
    return 0;
}