#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b values"<<endl;
    cin>>a>>b;
    if(a<b) {
        cout<<"a<b"<<endl; 
    }
    else if(a==b){
        cout<<"a=b"<<endl; 
    }
    else{
        cout<<"a>b"<<endl; 
    }

    int c;
    cout<<"enter c value"<<endl; 
    c=cin.get();//cin.get() is used to get ASCII values of all characters including space,tab and enter
    cout<<"c value is "<<c<<endl;
    
}