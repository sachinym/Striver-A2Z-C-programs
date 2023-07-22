#include <iostream>
using namespace std;
//parametrised approach
int sum=0;
void fun(int n,int m){
    sum+=n;
    if(n==m) {
        cout<<sum;
        return;}
    fun(n+1,m);
}
int main() {
	int n,m;
	fun(1,5);
	return 0;
}

//functional approach
int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
}
int main(){
    int n=5;
    cout<<fun(n);
    return 0;
}