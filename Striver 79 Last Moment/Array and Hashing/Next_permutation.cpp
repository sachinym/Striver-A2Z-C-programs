/*The next permutation of an array of integers is the next lexicographically greater permutation of its integer.*/
#include<bits/stdc++.h>
using namespace std;
vector<int> next_permutation(vector<int>&nums){
    int index=-1;
    int n=nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    //worst case possibility at edge case
    if(index==-1){
        reverse(nums.begin(),nums.end());
        return nums;
    }
    //find least greater element of the found index and swap it...
    for(int i=n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    //reverse the remaining elements as they are in perfect descending order... 
    reverse(nums.begin()+index+1,nums.end());
    return nums;
}

/*The above function explains the working of the STL inbuilt function next_permutation() */
int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> res = next_permutation(nums);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}