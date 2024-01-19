#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
    char level;

    
};

int main() {
    //static allocation of object
    hero h1;
    cout<<h1.health<<endl;
    cout<<h1.level<<endl;
    
    //dynamic allocation of object
    hero *h2 = new hero;
    cout<<(*h2).health<<endl; /*or*/ cout<<h2->health<<endl; 
    cout<<(*h2).level<<endl; /*or*/ cout<<h2->level<<endl;

    return 0;
}