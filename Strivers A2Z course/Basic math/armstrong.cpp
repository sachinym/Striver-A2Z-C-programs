#include<bits/stdc++.h>
using namespace std;
int totalnum(int n){
    int count=0;
    while(n>0){
        count++;
        n /=10;
    }
    return count;
}
string armstrongNumber(int n){
    int sum=0,temp=n,rem;
    int count= totalnum(n);
    while(n>0){
            rem=n%10;
            sum +=pow(rem,count);//sum=sum+(rem^count)
            n=n/10;//n=n/10
    }
    if(sum==temp)
    return "Yes";
    else
    return "No";
}
int main() {
    int n;
    cin>>n;
    cout<<armstrongNumber(n);
    return 0;
}