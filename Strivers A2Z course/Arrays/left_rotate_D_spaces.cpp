#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->{ O(d)+O(d)+O(n-d) }=O(n+d) S.C-->O(d)
void left_rotate(int arr[],int n,int d){
d=d%n;
int temp[d];
for(int i=0;i<d;i++) temp[i]=arr[i];
for(int i=d;i<n;i++) arr[i-d]=arr[i];
for(int i=n-d;i<n;i++) arr[i]=temp[i-(n-d)];
}
//[additional] reverse function working...
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//optimal solution[using inbuilt fn reverse()] T.C-->O(n)
void left_rotate(int arr[],int n,int d){
d=d%n;
reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);
}
int main() {
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    left_rotate(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
