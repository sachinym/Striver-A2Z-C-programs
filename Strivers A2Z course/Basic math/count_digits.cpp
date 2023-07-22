#include<bits/stdc++.h>
using namespace std;
int evenlyDivides(int N){
        int temp=N,count=0;
        while(temp!=0){
            int d= temp%10;
            temp /=10;
        if(d>0 && N%d==0){
            count++;
        }
        }
        return count;
}
int main() {
    int N=243;
    cout<<evenlyDivides(N);
    return 0;
}