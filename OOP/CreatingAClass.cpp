#include <iostream>
#include<vector>
using namespace std;

class Dosa{
    public:
        string name;
        int servings;
        vector<string> ingredients;
    
    void showDosa(){
        cout<<"Dosa name : "<<name<<endl;
        cout<<"Servings : "<<servings<<endl;
        for(string i : ingredients){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Dosa Dosa1;
    Dosa1.name = "Rava Masala Dosa";
    Dosa1.servings = 3;
    Dosa1.ingredients = {"Potato","Rava","Curry leaves","Oil"};
    Dosa1.showDosa();
    return 0;
}
