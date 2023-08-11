#include<bits/stdc++.h> //contains all libraries in this single library
using namespace std; //all inbuilt functions can be accessed through 'std' 
int main() {
//all data types:
    short int a;//2
    int b;//4
    long c;//8
    float d;//4
    double e;//8
    long long f;//8
    long double g;//16
    char h;//1
    string i;//32

cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<endl<<sizeof(d)<<" "<<sizeof(e)<<" "<<sizeof(f)<<endl<<sizeof(g)<<" "<<sizeof(h)<<" "<<sizeof(i);


   //string and getline
   string s;
   getline(cin,s);//'getline' is a inbuilt function that reads all strings given in single line
   cout<<s;
   return 0;
}