#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int health;

    public:
    char level;

//to access private properties of class outside, getter and putter is used
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
    hero h1;
    cout<<h1.getHealth()<<endl;//garbage values printed
    cout<<h1.getlevel()<<endl;
    
    h1.setHealth(70);//values is assigned
    h1.setlevel('A'); 

    cout<<h1.getHealth()<<endl;//assigned values printed
    cout<<h1.getlevel()<<endl;
    return 0;
}