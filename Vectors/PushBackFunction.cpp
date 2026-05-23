//The Push Back function is for including an element at the last
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <char> alphab={'q','w','e','r','t','y'};
    alphab.push_back('m');
    for(char x:alphab){
        cout<<x<<" ";
    }
    return 0;
}
