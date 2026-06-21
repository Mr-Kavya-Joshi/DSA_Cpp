//Here the return statement means “Exit this function right now and go back to the function call from where it was called.”

#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    if(dest==src){
        cout<<"Reached Home ! ";
        return;
    }
    cout<<"Source = "<<src<<" "<<"Destination = "<<dest<<endl;
    src++;
    reachHome(src,dest);
    
}

int main() {
    int source =1;
    int destination = 10;
    reachHome(source,destination);
    return 0;
}
