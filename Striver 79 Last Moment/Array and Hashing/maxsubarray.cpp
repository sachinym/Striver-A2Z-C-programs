/*Maximum subarray
Given an integer array nums, find the subarray
 with the largest sum, and return its sum.*/
#include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>&nums){
    int n=nums.size();
    long long a=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        if(sum>a) {a=sum;}
        if(sum<0) {sum=0;}
    }
    return a;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = maxsubarray(nums);
    cout<<ans;
    return 0;
}