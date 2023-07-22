#include<bits/stdc++.h>
using namespace std;
int main(){
    /*bitwise operators*/
    int a=4;
    int b=6;
    cout<<"a&b= "<< (a&b) <<endl;//4
    cout<<"a|b= "<< (a|b) <<endl;//6
    cout<<"~a= "<< ~a <<endl;//-5
    cout<<"a^b= "<< (a^b)  <<endl;//2
cout<<endl;
    /*left shift and right shift operators*/
    cout<<(17>>1)<<endl;//8
    cout<<(17>>2)<<endl;//4
    cout<<(19<<1)<<endl;//38
    cout<<(21<<2)<<endl;//84
cout<<endl;
    /*increment and decrement operators*/
    int i=7;
    cout<<(++i)<<endl;//8 ,i=8
    cout<<(i++)<<endl;//8 ,i=9
    cout<<(i--)<<endl;//9 ,i=8
    cout<<(--i)<<endl;//7 ,i=7
}