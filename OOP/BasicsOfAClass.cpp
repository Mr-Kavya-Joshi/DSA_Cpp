#include <iostream>
using namespace std;
    //what is a class - just as we hv int, string,char,.. similarly class is a user defined datatype
    //example name of class = 'hero'
class Hero{
    //properties
    int health;
};
    
class Empty{
};

int main(){
    //creating an obj
    Hero h1;
    Empty newclass;
    //now seeing the size of this
    cout<<"size : "<<sizeof(h1)<<endl;
    cout<<"size of the empty class is : "<<sizeof(newclass)<<endl;
    //Note from here that empty class size = 1 byte - just to keep its track.
    
    return 0;
}

//class is a kind of template, when we write 'Hero', it creates an instance of this.
//so, h1 will allocate memory to obj.
