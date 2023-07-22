//reversing the given array(1st version)with 2 pointer
#include <bits/stdc++.h>
using namespace std;
void exchange(int arr[],int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    exchange(arr,l+1,r-1);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
	for(auto i=0;i<n;i++) {cin>>arr[i];}
	exchange(arr,0,n-1);
	for(auto i=0;i<n;i++) {cout<<arr[i]<<" ";}
	return 0;
}