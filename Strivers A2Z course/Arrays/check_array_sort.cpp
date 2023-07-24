#include<bits/stdc++.h>
using namespace std;
int check_sorting(int a[],int n);
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=check_sorting(a,n);
    if(ans==1) cout<<"sorted";
    else cout<<"not sorted";
    return 0;
}

int check_sorting(int a[],int n){
for(int i=0;i<n;i++){
    if(a[i]<=a[i+1]){
        continue;
    }
    else if(a[i]>a[i+1]){
        return 0;
        break;
    }
}
return 1;
}