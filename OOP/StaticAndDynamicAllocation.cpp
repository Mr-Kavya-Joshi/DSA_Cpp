#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    
    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health = h;
    }
};

int main(){
    //Static allocation
    Hero a;
    cout<<"A's health is "<<a.getHealth()<<endl;
    
    //dynamically
    Hero *b = new Hero;
    cout<<"level is : "<<(*b).level<<endl;
    cout<<"level is : "<<(*b).health<<endl;
    cout<<"health is : "<<b->level<<endl;
    cout<<"health is : "<<b->getHealth()<<endl;

    return 0;
}
