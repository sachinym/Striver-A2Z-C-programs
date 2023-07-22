#include<bits/stdc++.h>
using namespace std;
string is_palindrome(int n){
        int m=0,rem,temp=n;
        while(temp>0){
            rem=temp%10;
            m=(m*10)+rem;
            temp/=10;
        }
        if(m==n)
        return "Yes";
        else 
        return "No";
}
int main() {
    int n=12321;
    cout<<is_palindrome(n);
    return 0;
}