//Given a 32 bit number X, reverse its binary form and print the answer in decimal.
#include<bits/stdc++.h>
using namespace std;
long long reversedBits(long long X) {
    unsigned int count = sizeof(X) * 8 - 1;
    unsigned int reverse_num = X;
 
    X >>= 1;
    while (X) {
        reverse_num <<= 1;
        reverse_num |= X & 1;
        X >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
    }
int main() {
    long long x=001;
    cout<<reversedBits(x);   
    return 0;
}