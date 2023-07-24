#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(nlog n+n) S.C-->O(n)
/*void no_duplicates(int a[],int n){
int index=0;
set<int> st;
for(int i=0;i<n;i++) st.insert(a[i]);
for(auto i:st) cout<<i<<' ';
cout<<"\n";
for(auto i:st) {
    a[index]=i;
    index++;
}
cout<<index;
}*/

//optimal solution T.C-->O(n) S.C-->O(1)
int no_duplicates(int a[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    return (i+1);
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int L=no_duplicates(a,n);
    for(int i=0;i<L;i++) cout<<a[i]<<" ";
    return 0;
}