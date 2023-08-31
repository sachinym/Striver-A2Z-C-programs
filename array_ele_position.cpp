#include<bits/stdc++.h>
using namespace std;
pair<int,int> func(int arr[],int n){
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            count++;
        }
        else{
            count1++;
        }
    }
    return {count1,count};
}
int main() {
    int n=6;
    int arr[n]={1,6,3,5,4,2};
    pair<int,int>ans = func(arr,n);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}