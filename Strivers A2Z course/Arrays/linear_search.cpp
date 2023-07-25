#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            return i;
        }
    }
    return -1;
}
int main() {
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"give element to find: ";
    cin>>x;
    cout<<"element is in position: "<<linear_search(arr,n,x);
    return 0;
}