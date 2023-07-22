#include<bits/stdc++.h>
using namespace std;
void fun(int n,int m){
   if(n==m+1) return;
   fun(n+1,m);
   cout<<n<<endl; 
}

int main() {
    int N=4;
    fun(1,N);
    return 0;
}