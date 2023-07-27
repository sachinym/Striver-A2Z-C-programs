#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(n²) S.C-->O(n)
vector<int> intersection_array(vector<int>a,vector<int>b,int n,int m){
vector<int>temp(m,0);
vector<int>ans;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j] && temp[j]==0){
            ans.push_back(a[i]);
            temp.push_back(1);
            break;
        }
        if(b[j]>a[i]) break;
    }
}
return ans;
}
//optimal solution T.C-->O(n+m) S.C-->O(1)
vector<int> intersection_array(vector<int>a,vector<int>b,int n,int m){
 int i=0;
 int j=0;
 vector<int>ans;
 while(i<n && j<m){
    if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }
    else{
        ans.push_back(a[i]);
        i++;
        j++;
    }
 }   
 return ans;
}
//alternate solution
int intersection_array(int a[],int b[],int n,int m){
    unordered_map<int,int>map;
    set<int> st;
    int count=0;
    for(int i=0;i<n;i++){
            map[a[i]]++;
    }
    for(int i=0;i<m;i++){
        if(map[b[i]]>0){
            st.insert(b[i]);
        }
    }
    return st.size();
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n); vector<int>b(m);
    //int a[n]; int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    vector<int> res = intersection_array(a,b,n,m);
    //int res=intersection_array(a,b,n,m);  cout<<res;
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    return 0;
}