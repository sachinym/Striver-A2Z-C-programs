#include<bits/stdc++.h>
using namespace std;
/*to print pattern 1                 1
                   1 2             2 1
                   1 2 3         3 2 1
                   1 2 3 4     4 3 2 1
                   1 2 3 4 5 5 4 3 2 1   */
void pattern(int n){
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int num1=1;num1<=i;num1++){
            cout<<num1<<" ";
        }

        for(int j=1;j<=spaces;j++){
            cout<<" "<<" ";
        }

        for(int num2=i;num2>=1;num2--){
            cout<<num2<<" ";
        }
        cout<<endl;
        spaces-=2;
    }
}
int main() {
    int n=5;
    pattern(n);   
    return 0;
}