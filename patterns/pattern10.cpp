#include<bits/stdc++.h>
using namespace std;
//odd number printed in reverse order
/*to print pattern 9 7 5 3 1 
                   7 5 3 1
                   5 3 1
                   3 1
                   1   */
void pattern(int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            int n=(j*2-1)-count;
            cout<<n<<" ";
        }
        count=count+2;
        cout<<endl;
    }
}
int main() {
    int n=5;
    pattern(n);
    return 0;
}