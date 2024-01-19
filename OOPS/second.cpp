#include<bits/stdc++.h>
using namespace std;
//by default, the access modifier will be private
class hero{
    public://public can be accessed inside and outside class
    int health;

    private://private is accessed only inside class
    char level;

    void print(){
        cout<<level<<endl;
    }
    
};

int main() {
    hero h1;
    //cout<<h1.health<<endl;
    //cout<<h1.level<<endl;
    
    return 0;
}