//bubble sort push the maximum to last by adjacent swaps
//time complexity=O(n²) & ∅(n²) ->worst case and average case
//time complexity=Ω(n)->best case
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
for(int i=n-1;i>=0;i--){    
    int didswap=0;//for best case
    for(int j=0;j<=i-1;j++){       
        if(arr[j]>arr[j+1]){
            didswap=1;//for best case
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    /*for best case
    if(didswap==0){
        break;
    }
    cout<<"swapped\n";*/
}
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}