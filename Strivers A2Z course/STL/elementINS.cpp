#include<bits/stdc++.h>
using namespace std;

//insert function(can be used for single linked list)
void elementINS(){
    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.end(),200); //{300,100,100,200}
    v.insert(v.begin()+1,2,5); //{300,5,5,100,100,200}

    vector<int>copy(2,50); //to add elements {50,50} to the vector v (vector to vector insert/copy)
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,5,5,100,100,200}

    v.pop_back(); //{50,50,300,5,5,100,100}
    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //v = {50,50,300,5,5,100,100}
    //copy = {50,50}
    v.swap(copy);// v-->{50,50} , copy--> {50,50,300,5,5,100,100}
    
    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v.clear(); //complete erase of the vector
    cout<<v.empty();// to check whether vector is empty or not
}

int main() {
    elementINS();
    return 0;
}