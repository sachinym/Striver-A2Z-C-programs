#include<bits/stdc++.h>
using namespace std;

//delete function
void elementDEL(){
    vector<int>v = {10,20,12,45,39,64};

    v.erase(v.begin());// first element 10 is deleted using this
    //v =  {20,12,45,39,64}
    v.erase(v.begin(),v.begin()+3); //to erase multiple elements, use v.erase(start , end);
    //v = {39,64}

    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }

}

int main() {
    elementDEL();
    return 0;
}