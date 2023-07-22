#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    //first array will be [low....mid]
    //second array will be [mid+1....high]
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mS(vector<int>&arr,int low,int high){
if(low==high) return;
int mid=(low+high)/2;
mS(arr,low,mid); //left half
mS(arr,mid+1,high); //right half
merge(arr,low,mid,high); //merging sorted halves
}

int main() {
    vector<int>arr={9,4,7,6,3,1,5};
    int n=7;
    mS(arr,0,n-1);
    for(auto i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}