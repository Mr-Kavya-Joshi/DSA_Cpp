#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char level;
    
    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health = h;
    }
};

int main(){
    Hero a;
    cout<<"A's health is "<<a.getHealth()<<endl;
    a.setHealth(50);
    cout<<"A's new health is "<<a.getHealth()<<endl;
    return 0;
}
