#include<bits/stdc++.h>
using namespace std;
int minzeros(string S){
    bitset<1000>temp(S);
    int count=0;
    int n=S.length();
    for(int i=0;i<n;i++){
        if(temp[i]==0){
            count++;
        }
    }
    return count;
}
int main(){
    string S="010100";
    cout<<minzeros(S);
    return 0;
}