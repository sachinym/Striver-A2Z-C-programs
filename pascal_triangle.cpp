#include<bits/stdc++.h>
using namespace std;
void pascal(int n){
    int arr[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                arr[i][j]=1;
                cout<<arr[i][j]<<" ";
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}
int main() {
    int n;
    cin>>n;
    pascal(n);
    return 0;
}