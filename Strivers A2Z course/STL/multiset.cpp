#include<bits/stdc++.h>
using namespace std;
void explainmultiset(){
//multiset is similar to set but it do allow multiple repeated value to store //keeps all elements sorted
//if one element is deleted, the repeated elements are also deleted
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);// all 1's erased

    int cnt=ms.count(1);//
    cout<<cnt<<endl;

    ms.erase(ms.find(1));// only single 1 is erased
}

int main() {
    explainmultiset();
    return 0;
}