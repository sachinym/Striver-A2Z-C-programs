#include<bits/stdc++.h>
using namespace std;
void explainset(){
/* set have two conditions
    1-->all elements will be arranged in ascending order
    2-->repeated elements are excluded*/
    set<int> st;
    st.insert(2); //{2}
    st.insert(4); //{2,4}
    st.insert(3); //{2,3,4}
    st.emplace(5); //{2,3,4,5}
    st.insert(3); //{2,3,4,5} another 3 not included

    auto it=st.find(3); //this function will find the location of given element
    cout<<*(it)<<endl;

    auto it1=st.find(10);// if given element not found the function will point after the st.end() case
    cout<<*(it1)<<endl;

    st.erase(4); //erase 4 //take logarithmic time

    auto it2=st.find(2); //alterantive method to erase
    st.erase(it2);// it will find the element 2 and erase //takes constant time

    int cnt=st.count(5);// this function will find the element and answers in 1(present) or 0(absent)
    cout<<cnt;

}

int main() {
    explainset();
    return 0;
}