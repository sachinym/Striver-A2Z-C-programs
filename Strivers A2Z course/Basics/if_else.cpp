#include<bits/stdc++.h>
using namespace std;
int main() {
    //grade allocation in a school depending on marks
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else{
        cout<<"A";
    }
    return 0;
}