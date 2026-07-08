#include <iostream>
//YOU CAN WRITE #include "hero.cpp" here,hero.cpp contains the class Hero. THEN SKIP DEFINING CLASS HERO AGAIN
using namespace std;

class Hero{
    public:
    int health;
    char level;
    private:
    int data;
    
    void function(){ //This is a private function
        cout<<data<<endl;
    }
};
    

int main(){
    //creating an obj
    Hero Ramesh;
    //Data members/ properties are accessed using dot operator "."
    cout<<"Health is : "<<Ramesh.health<<endl;

    return 0;
}
