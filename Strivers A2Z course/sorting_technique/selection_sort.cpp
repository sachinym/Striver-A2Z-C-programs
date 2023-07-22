//selection sort search for minimum number and swap it with the single pointer address
//time complexity=O(n²) & ∅(n²) & Ω(n²)->worst case, average case and best case
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini])
                mini=j;
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
} 
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}