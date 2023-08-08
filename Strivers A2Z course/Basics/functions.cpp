#include<bits/stdc++.h>
using namespace std;
    /*Functions are set of code which performs something for you
    It is used to modularize code
    It is used to increase readability
    It is used to use same code multiple times 
    varients of functions--
    void-->which does not return anything
    return
    parameterised
    non parameterised*/
    
    /*without parameter (no return)*/void Name(){
        cout<<"hi sachin!"<<endl;
    }
    /*with parameter (no return)*/void printname(string s){
        cout<<s<<endl;
    }
    /*with return and parameter*/int Summ(int n1,int n2){
        int n3=n1+n2;
        return n3;
    }
    int main(){
    Name();
    string s;
    getline(cin,s);
    printname(s); 
    int n1,n2;
    cin>>n1>>n2;
    int res=Summ(n1,n2);
    cout<<res;
    return 0;
}