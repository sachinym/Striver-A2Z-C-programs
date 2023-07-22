#include<bits/stdc++.h>
using namespace std;
    //STL--> standard template library
    //what is pairs?-->It is a part of utility library
void explainpair(){
    pair<int,float> p={1,3.5};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<double,int>> p1={1,{3.1428,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<" "<<arr[0].second;
}
int main()
{
    explainpair();
    return 0;
}