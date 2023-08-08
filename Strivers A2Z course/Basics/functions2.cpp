#include<bits/stdc++.h>
using namespace std;
//pass by value
void golf(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//pass by reference
//all arrays always uses pass by reference
void dolf(string &s)//&s will represent the original
{
    s[0]='m';
    cout<<s<<endl;
}
int main() {
    int num=10;
    golf(num);//num copy is sent to the function
    cout<<num<<endl;//original value will be intact
    string s = "dad";
    dolf(s);//s copy is sent to function
    cout<<s<<endl;//the original is modified by function(string &s)
    return 0;
}