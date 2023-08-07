#include<bits/stdc++.h>
using namespace std;
//optimal solution T.C-->O(n) S.C-->O(1)
int maxones(vector<int>&A){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main() {
    vector<int> A={1,1,0,0,1,1,1,0,0,1,1};
    int res=maxones(A);
    cout<<res<<endl;
    return 0;
}