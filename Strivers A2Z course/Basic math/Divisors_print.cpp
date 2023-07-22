#include<bits/stdc++.h>
using namespace std;
long long sumOfDivisors(int N){
    long long int sum=0;
    for(int i=1;i<=N;++i){
    sum+=(N/i)*i;
    }
    return sum;
}
int main() {
    int N=123;
    cout<<sumOfDivisors(N);
    return 0;
}