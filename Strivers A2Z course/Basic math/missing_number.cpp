/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. 
Find the missing element.*/
#include<bits/stdc++.h>
using namespace std;
int missingNum(vector<int> &arr,int n){
    int i,total=1;
    for(i=2;i<(n+1);i++){
        total+=i;
        total-=arr[i-2];
    }
    return total;
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++) cin>>arr[i];
    cout<<missingNum(arr,n)<<"\n";
    return 0;
}