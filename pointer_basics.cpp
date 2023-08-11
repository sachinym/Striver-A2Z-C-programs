#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=20;
    int *ptr; //pointer variable declaration
    ptr=&a; //&a is address of the variable 'a' where num 20 is stored; this address is stored in ptr variable; ptr=a is not possible;
    //note that datatype of ptr and var should be same
    cout<<"Value at ptr = "<<ptr<<endl;//
    cout<<"Address of var c = "<<*ptr<<endl;
    cout<<"Address of pointer itself = "<<&ptr<<endl;
    return 0;
}