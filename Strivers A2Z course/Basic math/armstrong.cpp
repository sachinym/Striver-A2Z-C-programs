#include<bits/stdc++.h>
using namespace std;
string armstrongNumber(int n){
    int sum=0,temp=n,rem;
    while(n>0){
            rem=n%10;
            sum +=pow(rem,3);
            n=n/10;
    }
    if(sum==temp)
    return "Yes";
    else
    return "No";
}
int main() {
    int n=339;
    cout<<armstrongNumber(n);
    return 0;
}