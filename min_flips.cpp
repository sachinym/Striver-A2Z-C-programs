/*Given a binary string, that is it contains only 0s and 1s.
We need to make this string a sequence of alternate characters by flipping some of the bits, 
our goal is to minimize the number of bits to be flipped.*/
#include<bits/stdc++.h>
using namespace std;
int minflips(string S){
    int a=0,b=0,n=S.size();
    for(int i=0;i<n;i++){
        S[i]=S[i]-'0';
        if((i%2)!=S[i]) a++;
        if((i+1)%2!=S[i])b++;
    }
    return min(a,b);
}
int main(){
    string S="0001010111";
    int ans=minflips(S);
    cout<<ans<<"\n";
    return 0;
}