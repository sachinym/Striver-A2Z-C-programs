/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, 
and nums[i] + nums[j] + nums[k] == 0.
repetation of triplets are not allowed*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> &nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
        }
    }
    return ans;
}
int main(){
    int n,s;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<endl<<"enter elements: "<<endl;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> res = threesum(nums);
    s=res.size();
    for(int i=0;i<s;i++){
        cout<<"[";
        for(auto j=res[i].begin();j!=res[i].end();j++){
            cout<< *j <<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}