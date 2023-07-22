#include<bits/stdc++.h>
using namespace std;
vector<long long> lcmAndGcd(long long A , long long B) {
    long long num1=A;
    long long num2=B;
    long long gcd,lcm;
    while(num2 !=0){
            long long temp = num2;
            num2 = num1 % num2;
            num1 = temp;
    }
    gcd=num1;
    lcm=(A*B)/gcd;
    return {lcm, gcd};
}
int main() {
    long long a=16,b=20;
    vector<long long>ans=lcmAndGcd(a,b);
    cout<<"lcm: "<<ans[0]<<" "<<"gcd: "<<ans[1];
    return 0;
}