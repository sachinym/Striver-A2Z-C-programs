#include<bits/stdc++.h> //contains all libraries in this single library
using namespace std; //all inbuilt functions can be accessed through 'std' 
int main() {
//all data types:
    short int a;
    int b;
    long c;
    float d;
    double e;
    long long f;
    long double g;
    char h;
    string i;

cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<endl<<sizeof(d)<<" "<<sizeof(e)<<" "<<sizeof(f)<<endl<<sizeof(g)<<" "<<sizeof(h)<<" "<<sizeof(i);


   //string and getline
   string s;
   getline(cin,s);//'getline' is a inbuilt function that reads all strings given in single line
   cout<<s;
   return 0;
}