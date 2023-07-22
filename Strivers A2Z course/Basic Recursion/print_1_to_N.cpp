#include<bits/stdc++.h>
using namespace std;
void fun(int n,int m){
   if(n<m) return;
   fun(n-1,m);
   cout<<n<<endl; 
}

int main() {
    int N=4;
    fun(N,1);
    return 0;
}