/*what is subarray?
A subarray is a contigious part of an array where only the continuous array elements are considered as subarray.
The discontinuous array elements(not adjacent) are called as subsequence of array.*/

/*Given an array containing N integers and an integer K.,
Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.*/
#include<bits/stdc++.h>
using namespace std;

//brute force solution T.C-->O(n²)
/*int lenOfLongSubarr(vector<int>arr,int n,int k){
int sum=0,len;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        sum+=arr[j];
        if(sum==k) len=max(len,j-i+1);
    }
}
return len;
}*/
//better solution T.C-->O(n logn)
int lenOfLongSubarr(vector<int>arr,int n,long long k){
map<long long,int> presumMap;
long long sum=0;
int maxlen=0;
for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    if(sum==k){
        maxlen=max(maxlen,i+1);
    }
    long long rem = sum-k;
    if(presumMap.find(rem)!=presumMap.end()){
        int len=i-presumMap[rem];
        maxlen=max(maxlen,len);
    }
    if(presumMap.find(sum)==presumMap.end()){
        presumMap[sum]=i;
    }
}
return maxlen;
}
//optimal solution T.C-->O(2n)
int lenOfLongSubarr(vector<int>arr,int n,long long k){
int left=0,right=0;
        long long sum=arr[0];
        int maxlen=0;
        while(right<n){
            while(left<=right && sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum==k){
                maxlen=max(maxlen,left-right+1);
            }
            right++;
            if(right<n) sum+=arr[right];
        }
        return maxlen;
}
int main() {
    int n;
    long long k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<lenOfLongSubarr(arr,n,k);
    return 0;
}