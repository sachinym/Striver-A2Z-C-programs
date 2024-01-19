#include<bits/stdc++.h>
#include "hero.cpp"
using namespace std;
//class is like a template or blueprint of object
//for empty class, sizeof object will be 1 byte(for identification)

class Hero{
    public:
    //properties of class
    int health;
    char level;
};

int main() {
    
    hero h1;//creation of object
    cout<<"size of object: "<<sizeof(h1)<<endl;

    Hero h2;
    cout<<h2.health<<endl;//to access properties of class, use 'obj.property'
    cout<<h2.level<<endl;
    return 0;
}