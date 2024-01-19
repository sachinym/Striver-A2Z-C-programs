#include<bits/stdc++.h>
using namespace std;
class hero{

    private:
    int health;
    char level;
    
    public:
    //default constructor
    hero(){
        cout<<"constructor called"<<endl;
    }

    //parameterised constructor
    hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    hero(int health,char level){
        this->level= level;
        this->health = health;
    }

    int getHealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setlevel(char c){
        level = c;
    }
};

int main() {
    //static allocation of object
    hero h1(10);
    h1.getHealth();
    
    //dynamic allocation of object
    hero *h2 = new hero(11);
    (*h2).getHealth();
    
    return 0;
}