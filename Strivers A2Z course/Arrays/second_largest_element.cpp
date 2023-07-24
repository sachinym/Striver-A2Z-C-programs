#include<bits/stdc++.h>
using namespace std;
//brute force solution T.C-->O(nlog n+n)
/*int main() {
    vector<int> arr(6);
    arr={4,7,1,7,2,5};
    sort(arr.begin(),arr.end());//[1,2,4,5,7,7]
    for(int i=0;i<6;i++){
        if(arr[5]!=arr[5-i]){
            cout<<arr[5-i];
            break;
        }
    }
    return 0;
}*/
//better solution T.C-->O(2n)
/*int main(){
    vector<int> arr(6);
    arr={4,7,1,7,2,5};
    int largest=arr[0];
    int Slargest=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<6;i++){
        if(arr[i]>Slargest && arr[i]!=largest){
            Slargest=arr[i];
        }
    }
    if(Slargest==INT_MIN) Slargest=-1;
    cout<<Slargest;
    return 0;
}*/
//Optimal solution T.C-->O(n)
int secondlargest(vector<int>&arr){
    int largest=arr[0];
    int Slargest=INT_MIN;
    for(int i=1;i<6;i++){
        if(arr[i]>largest){
            Slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>Slargest){
            Slargest=arr[i];
        }
    }
    return Slargest;
}
int main(){
    vector<int> arr(6);
    arr={4,7,1,7,2,5};
    cout<<secondlargest(arr);
}