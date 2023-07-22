#include<bits/stdc++.h>
using namespace std;
//vector is used as dynamic memory allocation when size of input is unknown.
//*can be used in arrays concept.

void explainvector(){
vector<int>v;       //this code creates empty container

v.push_back(1);     //this will input 1 into the empty container
v.emplace_back(2);  //this will increase the container size and insert the input value 2 inside it

//NOTE: emplace_back function is faster than push_back

vector<pair<int,int>>vec;
vec.push_back({1,2});
vec.emplace_back(1,2);

vector<int> v4(5, 100); // 5 is size and 100 is repeated values of 5 times i.e.,{100,100,100,100,100}

vector<int> v3(5);      //5 is size and have 5 garbage values or 0 value

vector<int>v1(5, 20);   //5 is size and 20 is repeated values of 5 times
vector<int>v2(v1);      //v1 vector values is copied to v2 vector

}

int main() {
    explainvector();
    return 0;
}