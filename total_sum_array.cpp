#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int num=0,num1=0,num2=0,total=0,num3,n;
    cout<<"enter number of values: ";
    cin>>n;
    int a;
    cout<<endl<<"enter values: ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    for(auto i=0;i<v.size();i++)
    {
        num = num + v[i];
    }
    cout<<num<<endl;
    num1=num;
    while(num>0)
    {
        num = num/10;
        total++;
    }
    for(int i=0;i<total;i++)
    {
        num3 = num1%10;
        num2 = num2+num3;
        num1 = num1/10;
    }
    cout<<num2;
    return 0;
}