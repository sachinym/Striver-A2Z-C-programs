#include<bits/stdc++.h>
using namespace std;
vector<int> MinAnd2ndMin(int a[],int n);
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>ans= MinAnd2ndMin(a,n);
    if(ans[0]==-1) cout<<-1<<endl;
    else cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}

vector<int> MinAnd2ndMin(int a[],int n){
int small=a[0];
int Ssmall=INT_MAX;
vector<int>result;
for(int i=1;i<n;i++){
    if(a[i]<small){
        Ssmall=small;
        small=a[i];
    }
    if(a[i]>small && a[i]<Ssmall){
        Ssmall=a[i];
    }
}
if(Ssmall!=INT_MAX){
    result.emplace_back(small);
    result.emplace_back(Ssmall);
}
else{
    result.emplace_back(-1);
}
return result;
}