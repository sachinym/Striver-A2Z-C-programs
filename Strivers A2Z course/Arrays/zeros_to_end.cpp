/*Given an array arr[] of N positive integers. 
Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements.*/
#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(2n) S.C-->O(n)
/*vector<int> pushZerosToEnd(vector<int> &arr,int n){
vector<int> temp;
//1st step
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp.emplace_back(arr[i]);
    }
}
//2nd step
int nz=temp.size();
for(int i=0;i<nz;i++){
    arr[i]=temp[i];
}
//3rd step
for(int i=nz;i<n;i++){
    arr[i]=0;
}
return arr;
}*/

//optimal solution[2 pointer approach] T.C-->O(n) S.C-->O(1)
void pushZerosToEnd(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    pushZerosToEnd(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}