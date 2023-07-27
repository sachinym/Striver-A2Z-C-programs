#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(nlog n)
int main() {
    vector<int> arr(5);
    arr={3,2,1,5,2};
    sort(arr.begin(),arr.end());
    cout<<"largest element is: "<<arr[4];
    return 0;
}
//optimal solution T.C-->O(n)
int main(){
    vector<int> arr(5);
    //arr={5,2,1,3,2};
    arr={1,1,1,1,1};
    int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }    
    }
    cout<<"largest element is: "<<largest;
      
}