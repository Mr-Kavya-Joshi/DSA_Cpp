//This code uses a range-based for loop because it is shorter, cleaner, and safer when you only want to access every element one by one.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <char> alphab={'q','w','e','r','t','y'};
    for(char x:alphab){
        cout<<x<<" ";
    }
    return 0;
}
