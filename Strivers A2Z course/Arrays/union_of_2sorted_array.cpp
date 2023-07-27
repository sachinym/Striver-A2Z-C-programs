#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(n1 logn)+O(n2 logn)+O(n) S.C-->O(n1+n2)
vector<int> sorted_array(vector<int>&a,vector<int>&b){
    int s1=a.size();
    int s2=b.size();
    set<int> st;
    for(int i=0;i<s1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<s2;i++){
        st.insert(b[i]);
    }
    vector<int>res;
    for(auto it:st){
        res.emplace_back(it);
    }
    return res;
}

//optimal solution T.C-->O(s1+s2)   S.C-->O(s1+s2)
vector<int>sorted_array(vector<int>&a,vector<int>&b){
    int s1=a.size();
    int s2=b.size();
    int i=0;
    int j=0;
    vector<int>res;
    while(i<s1 && j<s2){
        if(a[i]<=b[j]){
            if(res.size()==0 || res.back()!=a[i]){
                res.push_back(a[i]);
            }
            i++;
        }
        else{
            if(res.size()==0 || res.back()!=b[j]){
                res.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<s2){
        if(res.size()==0 || res.back()!=b[j]){
                res.push_back(b[j]);
        }
        j++;
    }
    while(i<s1){
        if(res.size()==0 || res.back()!=a[i]){
                res.push_back(a[i]);
        }
            i++;
    }
    
    return res;
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    vector<int> res = sorted_array(a,b);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    return 0;
}