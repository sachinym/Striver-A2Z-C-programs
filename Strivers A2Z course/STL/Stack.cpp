#include<bits/stdc++.h>
using namespace std;

//stack function(works on LIFO(last in first out))
void explainStack(){
    stack<int> st;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}
    
    cout<<st.top()<<" ";
    
    st.pop();
    cout<<st.top()<<" ";
    cout<<st.size()<<" ";
    cout<<st.empty()<<endl;

    stack<int>st1,st2;
    for(int i=1;i!=8;i++){
        st1.push(i);
    }
    for(int i=7;i!=1;--i){
        st2.push(i);
    } 
    for(int i=1;i!=8;i++){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    for(int i=7;i!=1;--i){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    st1.swap(st2);
    st2.top();
}

int main() {
    explainStack();
    return 0;
}