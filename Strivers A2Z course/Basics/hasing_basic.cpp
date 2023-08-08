#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
       hash[arr[i]]+=1; 
    }

    int c;
    cin>>c;
    while(c--){
        int num;
        cin>>num;
        //fetch
        cout<<num<<":"<<hash[num]<<endl;
    }
    return 0;
}
/*NOTE:
array inside main() function can store only upto 10⁶ elements(if array is an int); if it excedes, it throws segmentation error(due to overflow of storage space)
array outside main() function which is declaring globally can store upto 10⁷ elements(can also be extended;if array is an int)*/
