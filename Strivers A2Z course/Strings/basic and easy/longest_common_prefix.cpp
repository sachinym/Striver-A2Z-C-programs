
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs){
    sort(strs.begin(),strs.end());
    int a=strs.size();
    string n=strs[0], m=strs[a-1], res="";
    for(int i=0;i<n.size();i++){
        if(n[i]==m[i]){
            res=res+n[i];
        }else{
            break;
        }
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<string> strs;
    string temp="";
    for(int i=0;i<n;i++){
        cin>>temp;
        strs.push_back(temp);
        temp="";
    }
    string ans = longestCommonPrefix(strs);
    cout<<ans;
    return 0;
}