#include<bits/stdc++.h>
using namespace std;
/*to print pattern 1
                   0 1
                   1 0 1
                   0 1 0 1  */
void pattern(int n){
    int count=1;
    for(int i=0;i<=n;i++){
        if(i%2==0) count=1;
        else count=0;
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count=1-count;
        }
        cout<<endl;
    }
}
int main() {
    int n=4;
    pattern(n);
    return 0;
}